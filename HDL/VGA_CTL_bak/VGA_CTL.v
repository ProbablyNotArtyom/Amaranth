// TODO:
// Scroll register

	`default_nettype wire

	//`define ROM_CHARSET_FILE "VGA8_ROM.list"
	`define ROM_CHARSET_FILE "VGA_PS2.list"

//==================================

module VGA_CTL(
	input		clk_main,	// 50MHz base clock
	input		reset_in,	// System reset
	output		clk_system,	// Sysclk
	output 		pixclk,

	input		cs_vgamem,

	output	wire 	[23:0]	vram_a_bus,
	input 	wire	[7:0]	vram_d_bus,

	output	vga_blank,
	output	vga_hsync,
	output	vga_vsync,
	output wire [7:0]	vga_rgb_out
);

//----------Clock Dividers----------

clk_div_x2 clkgen_stage_1(clk_main, reset_in, pixclk);

wire [23:0] int_vram_a_bus;
assign vram_a_bus = (raster_visible == 0) ? int_vram_a_bus:24'bz;

//--------VGA Generation------------

wire	raster_visible;
wire	raster_active;
wire	[9:0]	px_address_x;
wire	[9:0]	px_address_y;

sync_generator #(
	.X_RES(640),
	.Y_RES(480)
)vga_sync_gen(
	.clk(pixclk),
	.reset(reset_in),
	.hsync_out(vga_hsync),
	.vsync_out(vga_vsync),
	.raster_visible(raster_visible),
	.active(raster_active),
	.raster_x(px_address_x),
	.raster_y(px_address_y)
);

vga_mode_txt vga_text_gen(
	.clk_in(clk_main),
	.raster_x(px_address_x),
	.raster_y(px_address_y),
	.rgb_out(vga_rgb_out),
	.active(raster_active),
	.mode_config(8'b00000000),
	//.mode_config(px_address_x[9:4] + px_address_y[9:5]),
	.address_out(int_vram_a_bus),
	.data_in(vram_d_bus)
);

//----------------------------------
endmodule

module charmem(
	input 	clk,
	input 	[7:0] ascii_in,
	input	[2:0] col,
	input	[3:0] row,
	output	bit_out
);

reg [7:0] romdata[0:4095]; // 256 chars, 16 scans, 8 pixels
initial $readmemh (`ROM_CHARSET_FILE, romdata);
assign bit_out = romdata[{ascii_in[7:0], row[3:0]}][~col];

//----------------------------------
endmodule
