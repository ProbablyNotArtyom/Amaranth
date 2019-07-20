
`default_nettype none

`define	CFG_TEXT_40COL	8'b00000001
`define	CFG_TEXT_15ROW	8'b00000010

//----------------------------------

module vga_mode_txt(
	input				clk_in,
	input		[9:0]	raster_x,
	input		[9:0]	raster_y,
	input 		[8:0]	mode_config,
	output wire 		pixel_out,

	output 		[23:0]	address_out,
	input 		[7:0]	data_in
);

reg		[7:0]		mem_val;		// Character to be displayed
reg  	[6:0]		column;
reg  	[5:0]		row;
reg  	[2:0]		char_x;
reg  	[3:0]		char_y;

always @(*) begin

	if (mode_config[0]) begin
		column[5:0] = raster_x[9:4];
		char_x = raster_x[3:1];
	end else begin
		column[6:0] = raster_x[9:3];
		char_x = raster_x[2:0];
	end
	if (mode_config[1]) begin
		row[4:0] = raster_y[9:5];
		char_y = raster_y[4:1];
	end else begin
		row[5:0] = raster_y[9:4];
		char_y = raster_y[3:0];
	end
	address_out = (mode_config[0]) ? 40:80;
	address_out = (address_out * row) + column;
end

always @(posedge clk_in) begin
	mem_val = data_in;
end

charmem charset_rom(
	.ascii_in(mem_val),
	.col(char_x),
	.row(char_y),
	.clk(clk_in),
	.bit_out(pixel_out)
);

endmodule

module vga_mode_40x15_txt(
	input				clk_in,
	input		[9:0]	raster_x,
	input		[9:0]	raster_y,
	output wire 		pixel_out,

	output 		[23:0]	address_out,
	input 		[7:0]	data_in
);

reg		[7:0]		mem_val;		// Character to be displayed
wire  	[6:0]		column;
wire  	[5:0]		row;

assign column[5:0] = raster_x[9:4];
assign row[4:0] = raster_y[9:5];
always @(*) begin
	address_out = (40 * row) + column;
end

always @(posedge clk_in) begin
	mem_val = data_in;
end

charmem charset_rom(
	.ascii_in(mem_val),
	.col(raster_x[3:1]),
	.row(raster_y[4:1]),
	.clk(clk_in),
	.bit_out(pixel_out)
);

endmodule

//----------------------------------

module vga_mode_640x480_bmp(
	input				clk_in,
	input		[9:0]	raster_x,
	input		[9:0]	raster_y,
	output wire 		pixel_out,

	output wire [23:0]	address_out
);

endmodule

//----------------------------------

module vga_mode_320x240_bmp(
	input				clk_in,
	input		[9:0]	raster_x,
	input		[9:0]	raster_y,
	output wire 		pixel_out
);

endmodule
