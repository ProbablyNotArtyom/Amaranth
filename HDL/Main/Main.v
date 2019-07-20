
/*
  Memory Map
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
0x00000000 - 0x00000000	|	SRAM
0xFFF00000 - 0xFFF7FFFF	|	ROM
0xC0000000 - 0xC007FFFF	|	DRAM

*/
module Main(

	input	[3:0]	a_bus_in,
	
	input		reset,
	input		clk,
	
	output	CS_rom,
	output	CS_sram,
	output	CS_dram

);

	wire [3:0]	cs_gen_out;
	
assign CS_rom 		= cs_gen_out[0];
assign CS_sram 	= cs_gen_out[1];
assign CS_dram 	= cs_gen_out[2];
	
Address_Range_Decoder_Static #(.width(4)) addr_decode_0 (
	.addr		(a_bus_in[3:0]),
	.cs_out	(cs_gen_out),
	.clk		(clk)
);

endmodule


module Address_Range_Decoder_Static #(parameter	width	= 0) (
	input										clk,
	input		wire	[width-1:0]			addr,
	output	reg	[(2^width)-1:0]	cs_out				
);
	integer	i;
	initial begin
		for(i = 0; i < (2^width); i = i + 1) begin
			cs_out[i] = 1'b0;
		end
	end
	always@(*) begin
		for(i = 0; i < (2^width); i = i + 1) begin
			cs_out[i] = 1'b0;
		end
	end

endmodule
