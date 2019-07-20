

module clk_div_x2(
	input		clk_in,
	input		reset_in,
	output	reg	clk_out
 );

always @(posedge clk_in) begin
	if (~reset_in)
		clk_out <= 1'b0;
	else
		clk_out <= ~clk_out;
end

endmodule

module flipflop_d(
	input 	d,
	input 	clk,
	output 	reg q
);

always @(posedge clk) begin
	q <= ~d;
end

endmodule

module charmem(
	input 	clk,
	input 	[7:0] ascii_in,
	input	[2:0] col,
	input	[3:0] row,
	output	bit_out
);

reg [7:0] romdata[0:4095]; // 256 chars, 16 scans, 8 pixels

initial begin
    $readmemh ("VGA8_ROM.list", romdata);
end

assign bit_out = romdata[{ascii_in[7:0], row[3:0]}][~col];

endmodule
