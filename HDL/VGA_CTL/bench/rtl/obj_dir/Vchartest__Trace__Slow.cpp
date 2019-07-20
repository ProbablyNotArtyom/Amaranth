// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vchartest__Syms.h"


//======================

void Vchartest::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&Vchartest::traceInit, &Vchartest::traceFull, &Vchartest::traceChg, this);
}
void Vchartest::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    Vchartest* t=(Vchartest*)userthis;
    Vchartest__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
	VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void Vchartest::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vchartest* t=(Vchartest*)userthis;
    Vchartest__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void Vchartest::traceInitThis(Vchartest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vchartest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void Vchartest::traceFullThis(Vchartest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vchartest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vchartest::traceInitThis__1(Vchartest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vchartest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit(c+24,"i_clk",-1);
	vcdp->declBit(c+25,"i_pixclk",-1);
	vcdp->declBit(c+26,"i_reset",-1);
	vcdp->declBit(c+27,"i_test",-1);
	vcdp->declBus(c+28,"i_hm_width",-1,12,0);
	vcdp->declBus(c+29,"i_hm_porch",-1,12,0);
	vcdp->declBus(c+30,"i_hm_synch",-1,12,0);
	vcdp->declBus(c+31,"i_hm_raw",-1,12,0);
	vcdp->declBus(c+32,"i_vm_height",-1,10,0);
	vcdp->declBus(c+33,"i_vm_porch",-1,10,0);
	vcdp->declBus(c+34,"i_vm_synch",-1,10,0);
	vcdp->declBus(c+35,"i_vm_raw",-1,10,0);
	vcdp->declBit(c+36,"o_vga_vsync",-1);
	vcdp->declBit(c+37,"o_vga_hsync",-1);
	vcdp->declBus(c+38,"o_vga_red",-1,7,0);
	vcdp->declBus(c+39,"o_vga_grn",-1,7,0);
	vcdp->declBus(c+40,"o_vga_blu",-1,7,0);
	vcdp->declBit(c+41,"o_interrupt",-1);
	vcdp->declBus(c+42,"i_vram_data",-1,7,0);
	vcdp->declBus(c+43,"o_vram_addr",-1,23,0);
	vcdp->declBus(c+44,"chartest BW",-1,31,0);
	vcdp->declBus(c+45,"chartest FW",-1,31,0);
	vcdp->declBus(c+46,"chartest LW",-1,31,0);
	vcdp->declBus(c+47,"chartest AW",-1,31,0);
	vcdp->declBit(c+24,"chartest i_clk",-1);
	vcdp->declBit(c+25,"chartest i_pixclk",-1);
	vcdp->declBit(c+26,"chartest i_reset",-1);
	vcdp->declBit(c+27,"chartest i_test",-1);
	vcdp->declBus(c+28,"chartest i_hm_width",-1,12,0);
	vcdp->declBus(c+29,"chartest i_hm_porch",-1,12,0);
	vcdp->declBus(c+30,"chartest i_hm_synch",-1,12,0);
	vcdp->declBus(c+31,"chartest i_hm_raw",-1,12,0);
	vcdp->declBus(c+32,"chartest i_vm_height",-1,10,0);
	vcdp->declBus(c+33,"chartest i_vm_porch",-1,10,0);
	vcdp->declBus(c+34,"chartest i_vm_synch",-1,10,0);
	vcdp->declBus(c+35,"chartest i_vm_raw",-1,10,0);
	vcdp->declBit(c+36,"chartest o_vga_vsync",-1);
	vcdp->declBit(c+37,"chartest o_vga_hsync",-1);
	vcdp->declBus(c+38,"chartest o_vga_red",-1,7,0);
	vcdp->declBus(c+39,"chartest o_vga_grn",-1,7,0);
	vcdp->declBus(c+40,"chartest o_vga_blu",-1,7,0);
	vcdp->declBit(c+41,"chartest o_interrupt",-1);
	vcdp->declBus(c+42,"chartest i_vram_data",-1,7,0);
	vcdp->declBus(c+43,"chartest o_vram_addr",-1,23,0);
	vcdp->declBus(c+7,"chartest vga_rgb",-1,7,0);
	vcdp->declBit(c+48,"chartest sysclk",-1);
	vcdp->declBit(c+49,"chartest o_vga_blanking",-1);
	vcdp->declBit(c+24,"chartest vga_interface_0 clk_main",-1);
	vcdp->declBit(c+26,"chartest vga_interface_0 reset_in",-1);
	vcdp->declBit(c+48,"chartest vga_interface_0 clk_system",-1);
	vcdp->declBit(c+8,"chartest vga_interface_0 pixclk",-1);
	vcdp->declBit(c+27,"chartest vga_interface_0 cs_vgamem",-1);
	vcdp->declBus(c+43,"chartest vga_interface_0 vram_a_bus",-1,23,0);
	vcdp->declBus(c+42,"chartest vga_interface_0 vram_d_bus",-1,7,0);
	vcdp->declBit(c+49,"chartest vga_interface_0 vga_blank",-1);
	vcdp->declBit(c+37,"chartest vga_interface_0 vga_hsync",-1);
	vcdp->declBit(c+36,"chartest vga_interface_0 vga_vsync",-1);
	vcdp->declBus(c+7,"chartest vga_interface_0 vga_rgb_out",-1,7,0);
	vcdp->declBus(c+9,"chartest vga_interface_0 int_vram_a_bus",-1,23,0);
	vcdp->declBus(c+9,"chartest vga_interface_0 int_bmp_a_bus",-1,23,0);
	vcdp->declBus(c+10,"chartest vga_interface_0 int_txt_a_bus",-1,23,0);
	vcdp->declBit(c+50,"chartest vga_interface_0 vga_mode_bmp",-1);
	vcdp->declBit(c+51,"chartest vga_interface_0 vga_mode_txt",-1);
	vcdp->declBus(c+7,"chartest vga_interface_0 bmp_rgb_out",-1,7,0);
	vcdp->declBus(c+11,"chartest vga_interface_0 txt_rgb_out",-1,7,0);
	vcdp->declBit(c+20,"chartest vga_interface_0 raster_visible",-1);
	vcdp->declBit(c+21,"chartest vga_interface_0 raster_active",-1);
	vcdp->declBit(c+4,"chartest vga_interface_0 mod_raster_active",-1);
	vcdp->declBus(c+22,"chartest vga_interface_0 px_address_x",-1,9,0);
	vcdp->declBus(c+23,"chartest vga_interface_0 px_address_y",-1,9,0);
	vcdp->declBus(c+5,"chartest vga_interface_0 mod_px_address_x",-1,9,0);
	vcdp->declBus(c+6,"chartest vga_interface_0 mod_px_address_y",-1,9,0);
	vcdp->declBus(c+1,"chartest vga_interface_0 scroll_reg_y",-1,7,0);
	vcdp->declBus(c+2,"chartest vga_interface_0 scroll_reg_x",-1,7,0);
	vcdp->declBit(c+24,"chartest vga_interface_0 clkgen_stage_1 clk_in",-1);
	vcdp->declBit(c+26,"chartest vga_interface_0 clkgen_stage_1 reset_in",-1);
	vcdp->declBit(c+8,"chartest vga_interface_0 clkgen_stage_1 clk_out",-1);
	vcdp->declBit(c+8,"chartest vga_interface_0 vga_sync_gen clk",-1);
	vcdp->declBit(c+26,"chartest vga_interface_0 vga_sync_gen reset",-1);
	vcdp->declBit(c+37,"chartest vga_interface_0 vga_sync_gen hsync_out",-1);
	vcdp->declBit(c+36,"chartest vga_interface_0 vga_sync_gen vsync_out",-1);
	vcdp->declBit(c+20,"chartest vga_interface_0 vga_sync_gen raster_visible",-1);
	vcdp->declBit(c+21,"chartest vga_interface_0 vga_sync_gen active",-1);
	vcdp->declBus(c+22,"chartest vga_interface_0 vga_sync_gen raster_x",-1,9,0);
	vcdp->declBus(c+23,"chartest vga_interface_0 vga_sync_gen raster_y",-1,9,0);
	vcdp->declBus(c+52,"chartest vga_interface_0 vga_sync_gen X_RES",-1,31,0);
	vcdp->declBus(c+53,"chartest vga_interface_0 vga_sync_gen Y_RES",-1,31,0);
	vcdp->declBus(c+54,"chartest vga_interface_0 vga_sync_gen hpixels",-1,31,0);
	vcdp->declBus(c+55,"chartest vga_interface_0 vga_sync_gen vlines",-1,31,0);
	vcdp->declBus(c+56,"chartest vga_interface_0 vga_sync_gen hpulse",-1,31,0);
	vcdp->declBus(c+57,"chartest vga_interface_0 vga_sync_gen vpulse",-1,31,0);
	vcdp->declBus(c+58,"chartest vga_interface_0 vga_sync_gen hbp",-1,31,0);
	vcdp->declBus(c+59,"chartest vga_interface_0 vga_sync_gen hfp",-1,31,0);
	vcdp->declBus(c+60,"chartest vga_interface_0 vga_sync_gen vbp",-1,31,0);
	vcdp->declBus(c+61,"chartest vga_interface_0 vga_sync_gen vfp",-1,31,0);
	vcdp->declBit(c+24,"chartest vga_interface_0 vga_text_gen clk_in",-1);
	vcdp->declBit(c+4,"chartest vga_interface_0 vga_text_gen active",-1);
	vcdp->declBus(c+5,"chartest vga_interface_0 vga_text_gen raster_x",-1,9,0);
	vcdp->declBus(c+6,"chartest vga_interface_0 vga_text_gen raster_y",-1,9,0);
	vcdp->declBus(c+62,"chartest vga_interface_0 vga_text_gen mode_config",-1,7,0);
	vcdp->declBus(c+11,"chartest vga_interface_0 vga_text_gen rgb_out",-1,7,0);
	vcdp->declBus(c+10,"chartest vga_interface_0 vga_text_gen address_out",-1,23,0);
	vcdp->declBus(c+42,"chartest vga_interface_0 vga_text_gen data_in",-1,7,0);
	vcdp->declBus(c+12,"chartest vga_interface_0 vga_text_gen mem_val",-1,7,0);
	vcdp->declBus(c+13,"chartest vga_interface_0 vga_text_gen attr_val",-1,7,0);
	vcdp->declBus(c+14,"chartest vga_interface_0 vga_text_gen column",-1,6,0);
	vcdp->declBus(c+15,"chartest vga_interface_0 vga_text_gen row",-1,5,0);
	vcdp->declBus(c+16,"chartest vga_interface_0 vga_text_gen char_x",-1,2,0);
	vcdp->declBus(c+17,"chartest vga_interface_0 vga_text_gen char_y",-1,3,0);
	vcdp->declBit(c+18,"chartest vga_interface_0 vga_text_gen b_state",-1);
	vcdp->declBit(c+3,"chartest vga_interface_0 vga_text_gen pixel_out",-1);
	vcdp->declBit(c+24,"chartest vga_interface_0 vga_text_gen charset_rom clk",-1);
	vcdp->declBus(c+12,"chartest vga_interface_0 vga_text_gen charset_rom ascii_in",-1,7,0);
	vcdp->declBus(c+16,"chartest vga_interface_0 vga_text_gen charset_rom col",-1,2,0);
	vcdp->declBus(c+17,"chartest vga_interface_0 vga_text_gen charset_rom row",-1,3,0);
	vcdp->declBit(c+3,"chartest vga_interface_0 vga_text_gen charset_rom bit_out",-1);
	// Tracing: chartest vga_interface_0 vga_text_gen charset_rom romdata // Ignored: Wide memory > --trace-max-array ents at ../../VGA_CTL.v:139
	vcdp->declBit(c+24,"chartest vga_interface_0 vga_bmp_gen clk_in",-1);
	vcdp->declBit(c+4,"chartest vga_interface_0 vga_bmp_gen active",-1);
	vcdp->declBus(c+5,"chartest vga_interface_0 vga_bmp_gen raster_x",-1,9,0);
	vcdp->declBus(c+6,"chartest vga_interface_0 vga_bmp_gen raster_y",-1,9,0);
	vcdp->declBus(c+62,"chartest vga_interface_0 vga_bmp_gen mode_config",-1,7,0);
	vcdp->declBus(c+7,"chartest vga_interface_0 vga_bmp_gen rgb_out",-1,7,0);
	vcdp->declBus(c+9,"chartest vga_interface_0 vga_bmp_gen address_out",-1,23,0);
	vcdp->declBus(c+42,"chartest vga_interface_0 vga_bmp_gen data_in",-1,7,0);
	vcdp->declBus(c+63,"chartest vga_interface_0 vga_bmp_gen mem_val",-1,7,0);
	vcdp->declBit(c+19,"chartest vga_interface_0 vga_bmp_gen b_state",-1);
    }
}

void Vchartest::traceFullThis__1(Vchartest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vchartest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus(c+1,(vlTOPp->chartest__DOT__vga_interface_0__DOT__scroll_reg_y),8);
	vcdp->fullBus(c+2,(vlTOPp->chartest__DOT__vga_interface_0__DOT__scroll_reg_x),8);
	vcdp->fullBit(c+3,((1U & (vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__charset_rom__DOT__romdata
				  [(((IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__mem_val) 
				     << 4U) | (IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__char_y))] 
				  >> (7U & (~ (IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__char_x)))))));
	vcdp->fullBit(c+4,(vlTOPp->chartest__DOT__vga_interface_0__DOT__mod_raster_active));
	vcdp->fullBus(c+5,(vlTOPp->chartest__DOT__vga_interface_0__DOT__mod_px_address_x),10);
	vcdp->fullBus(c+6,(vlTOPp->chartest__DOT__vga_interface_0__DOT__mod_px_address_y),10);
	vcdp->fullBus(c+7,(vlTOPp->chartest__DOT__vga_interface_0__DOT__bmp_rgb_out),8);
	vcdp->fullBit(c+8,(vlTOPp->chartest__DOT__vga_interface_0__DOT__pixclk));
	vcdp->fullBus(c+9,(vlTOPp->chartest__DOT__vga_interface_0__DOT__int_bmp_a_bus),24);
	vcdp->fullBus(c+10,(vlTOPp->chartest__DOT__vga_interface_0__DOT__int_txt_a_bus),24);
	vcdp->fullBus(c+11,(vlTOPp->chartest__DOT__vga_interface_0__DOT__txt_rgb_out),8);
	vcdp->fullBus(c+12,(vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__mem_val),8);
	vcdp->fullBus(c+13,(vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__attr_val),8);
	vcdp->fullBus(c+14,(vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__column),7);
	vcdp->fullBus(c+15,(vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__row),6);
	vcdp->fullBus(c+16,(vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__char_x),3);
	vcdp->fullBus(c+17,(vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__char_y),4);
	vcdp->fullBit(c+18,(vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__b_state));
	vcdp->fullBit(c+19,(vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_bmp_gen__DOT__b_state));
	vcdp->fullBit(c+20,((1U & ((0x1ecU > (IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_y))
				    ? 0U : 1U))));
	vcdp->fullBit(c+21,((1U & (((0x1eaU > (IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_y)) 
				    & (0x290U > (IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_x)))
				    ? 0U : 1U))));
	vcdp->fullBus(c+22,(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_x),10);
	vcdp->fullBus(c+23,(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_y),10);
	vcdp->fullBit(c+24,(vlTOPp->i_clk));
	vcdp->fullBit(c+25,(vlTOPp->i_pixclk));
	vcdp->fullBit(c+26,(vlTOPp->i_reset));
	vcdp->fullBit(c+27,(vlTOPp->i_test));
	vcdp->fullBus(c+28,(vlTOPp->i_hm_width),13);
	vcdp->fullBus(c+29,(vlTOPp->i_hm_porch),13);
	vcdp->fullBus(c+30,(vlTOPp->i_hm_synch),13);
	vcdp->fullBus(c+31,(vlTOPp->i_hm_raw),13);
	vcdp->fullBus(c+32,(vlTOPp->i_vm_height),11);
	vcdp->fullBus(c+33,(vlTOPp->i_vm_porch),11);
	vcdp->fullBus(c+34,(vlTOPp->i_vm_synch),11);
	vcdp->fullBus(c+35,(vlTOPp->i_vm_raw),11);
	vcdp->fullBit(c+36,(vlTOPp->o_vga_vsync));
	vcdp->fullBit(c+37,(vlTOPp->o_vga_hsync));
	vcdp->fullBus(c+38,(vlTOPp->o_vga_red),8);
	vcdp->fullBus(c+39,(vlTOPp->o_vga_grn),8);
	vcdp->fullBus(c+40,(vlTOPp->o_vga_blu),8);
	vcdp->fullBit(c+41,(vlTOPp->o_interrupt));
	vcdp->fullBus(c+42,(vlTOPp->i_vram_data),8);
	vcdp->fullBus(c+43,(vlTOPp->o_vram_addr),24);
	vcdp->fullBus(c+44,(0x20U),32);
	vcdp->fullBus(c+45,(0xdU),32);
	vcdp->fullBus(c+46,(0xbU),32);
	vcdp->fullBus(c+47,(0x18U),32);
	vcdp->fullBit(c+48,(vlTOPp->chartest__DOT__sysclk));
	vcdp->fullBit(c+49,(vlTOPp->chartest__DOT__o_vga_blanking));
	vcdp->fullBit(c+50,(1U));
	vcdp->fullBit(c+51,(0U));
	vcdp->fullBus(c+52,(0x280U),32);
	vcdp->fullBus(c+53,(0x1e0U),32);
	vcdp->fullBus(c+54,(0x320U),32);
	vcdp->fullBus(c+55,(0x209U),32);
	vcdp->fullBus(c+56,(0x60U),32);
	vcdp->fullBus(c+57,(2U),32);
	vcdp->fullBus(c+58,(0x2f0U),32);
	vcdp->fullBus(c+59,(0x290U),32);
	vcdp->fullBus(c+60,(0x1ecU),32);
	vcdp->fullBus(c+61,(0x1eaU),32);
	vcdp->fullBus(c+62,(0U),8);
	vcdp->fullBus(c+63,(vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_bmp_gen__DOT__mem_val),8);
    }
}
