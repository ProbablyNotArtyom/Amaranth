// TODO:
// Scroll register

	`default_nettype wire

//==================================

module VGA_CTL(
	input		clk_main,	// 100MHz base clock
	input		reset_in,	// System reset
	output		clk_system,	// Sysclk
	input 		pixclk,

	input		cs_vgamem,

	output  [23:0]	vram_a_bus,
	input	[7:0]	vram_d_bus,

	output	vga_blank,
	output	vga_hsync,
	output	vga_vsync,
	output reg [7:0]	vga_rgb_out
);

//----------Clock Dividers----------

wire	clk_50mhz;
clk_div_x2 clkgen_stage_1(clk_main, reset_in, clk_50mhz);
clk_div_x2 clkgen_stage_2(clk_50mhz, reset_in, clk_system);

//--------VGA Generation------------

wire	raster_visible;
wire	[9:0]	px_address_x;
wire	[9:0]	px_address_y;
wire 	char_px_out;

sync_generator #(
	.X_RES(640),
	.Y_RES(480)
)vga_sync_gen(
	.clk(pixclk),
	.reset(reset_in),
	.hsync_out(vga_hsync),
	.vsync_out(vga_vsync),
	.raster_visible(raster_visible),
	.raster_x(px_address_x),
	.raster_y(px_address_y)
);

vga_mode_txt vga_text_gen(
	.clk_in(pixclk),
	.raster_x(px_address_x),
	.raster_y(px_address_y),
	.pixel_out(char_px_out),
	.mode_config(8'b00000000),	// px_address_x[9:4] + px_address_y[9:5]
	.address_out(vram_a_bus),
	.data_in(vram_d_bus)
);

always @(posedge pixclk) begin
	vga_rgb_out <= (char_px_out == 1 && raster_visible == 0) ? 8'hFF:8'h00;
end

//----------------------------------
endmodule
