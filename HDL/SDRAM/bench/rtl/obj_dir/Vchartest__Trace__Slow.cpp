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
	vcdp->declBit(c+12,"i_clk",-1);
	vcdp->declBit(c+13,"i_pixclk",-1);
	vcdp->declBit(c+14,"i_reset",-1);
	vcdp->declBit(c+15,"i_test",-1);
	vcdp->declBus(c+16,"i_hm_width",-1,12,0);
	vcdp->declBus(c+17,"i_hm_porch",-1,12,0);
	vcdp->declBus(c+18,"i_hm_synch",-1,12,0);
	vcdp->declBus(c+19,"i_hm_raw",-1,12,0);
	vcdp->declBus(c+20,"i_vm_height",-1,10,0);
	vcdp->declBus(c+21,"i_vm_porch",-1,10,0);
	vcdp->declBus(c+22,"i_vm_synch",-1,10,0);
	vcdp->declBus(c+23,"i_vm_raw",-1,10,0);
	vcdp->declBit(c+24,"o_vga_vsync",-1);
	vcdp->declBit(c+25,"o_vga_hsync",-1);
	vcdp->declBus(c+26,"o_vga_red",-1,7,0);
	vcdp->declBus(c+27,"o_vga_grn",-1,7,0);
	vcdp->declBus(c+28,"o_vga_blu",-1,7,0);
	vcdp->declBit(c+29,"o_interrupt",-1);
	vcdp->declBus(c+30,"i_vram_data",-1,7,0);
	vcdp->declBus(c+31,"o_vram_addr",-1,23,0);
	vcdp->declBus(c+32,"chartest BW",-1,31,0);
	vcdp->declBus(c+33,"chartest FW",-1,31,0);
	vcdp->declBus(c+34,"chartest LW",-1,31,0);
	vcdp->declBus(c+35,"chartest AW",-1,31,0);
	vcdp->declBit(c+12,"chartest i_clk",-1);
	vcdp->declBit(c+13,"chartest i_pixclk",-1);
	vcdp->declBit(c+14,"chartest i_reset",-1);
	vcdp->declBit(c+15,"chartest i_test",-1);
	vcdp->declBus(c+16,"chartest i_hm_width",-1,12,0);
	vcdp->declBus(c+17,"chartest i_hm_porch",-1,12,0);
	vcdp->declBus(c+18,"chartest i_hm_synch",-1,12,0);
	vcdp->declBus(c+19,"chartest i_hm_raw",-1,12,0);
	vcdp->declBus(c+20,"chartest i_vm_height",-1,10,0);
	vcdp->declBus(c+21,"chartest i_vm_porch",-1,10,0);
	vcdp->declBus(c+22,"chartest i_vm_synch",-1,10,0);
	vcdp->declBus(c+23,"chartest i_vm_raw",-1,10,0);
	vcdp->declBit(c+24,"chartest o_vga_vsync",-1);
	vcdp->declBit(c+25,"chartest o_vga_hsync",-1);
	vcdp->declBus(c+26,"chartest o_vga_red",-1,7,0);
	vcdp->declBus(c+27,"chartest o_vga_grn",-1,7,0);
	vcdp->declBus(c+28,"chartest o_vga_blu",-1,7,0);
	vcdp->declBit(c+29,"chartest o_interrupt",-1);
	vcdp->declBus(c+30,"chartest i_vram_data",-1,7,0);
	vcdp->declBus(c+31,"chartest o_vram_addr",-1,23,0);
	vcdp->declBus(c+4,"chartest vga_rgb",-1,7,0);
	vcdp->declBit(c+11,"chartest sysclk",-1);
	vcdp->declBit(c+36,"chartest o_vga_blanking",-1);
	vcdp->declBit(c+12,"chartest vga_interface_0 clk_main",-1);
	vcdp->declBit(c+14,"chartest vga_interface_0 reset_in",-1);
	vcdp->declBit(c+11,"chartest vga_interface_0 clk_system",-1);
	vcdp->declBit(c+13,"chartest vga_interface_0 pixclk",-1);
	vcdp->declBit(c+15,"chartest vga_interface_0 cs_vgamem",-1);
	vcdp->declBus(c+31,"chartest vga_interface_0 vram_a_bus",-1,23,0);
	vcdp->declBus(c+30,"chartest vga_interface_0 vram_d_bus",-1,7,0);
	vcdp->declBit(c+36,"chartest vga_interface_0 vga_blank",-1);
	vcdp->declBit(c+25,"chartest vga_interface_0 vga_hsync",-1);
	vcdp->declBit(c+24,"chartest vga_interface_0 vga_vsync",-1);
	vcdp->declBus(c+4,"chartest vga_interface_0 vga_rgb_out",-1,7,0);
	vcdp->declBit(c+6,"chartest vga_interface_0 clk_50mhz",-1);
	vcdp->declBit(c+37,"chartest vga_interface_0 raster_visible",-1);
	vcdp->declBus(c+7,"chartest vga_interface_0 px_address_x",-1,9,0);
	vcdp->declBus(c+8,"chartest vga_interface_0 px_address_y",-1,9,0);
	vcdp->declBit(c+1,"chartest vga_interface_0 char_px_out",-1);
	vcdp->declBit(c+12,"chartest vga_interface_0 clkgen_stage_1 clk_in",-1);
	vcdp->declBit(c+14,"chartest vga_interface_0 clkgen_stage_1 reset_in",-1);
	vcdp->declBit(c+6,"chartest vga_interface_0 clkgen_stage_1 clk_out",-1);
	vcdp->declBit(c+6,"chartest vga_interface_0 clkgen_stage_2 clk_in",-1);
	vcdp->declBit(c+14,"chartest vga_interface_0 clkgen_stage_2 reset_in",-1);
	vcdp->declBit(c+11,"chartest vga_interface_0 clkgen_stage_2 clk_out",-1);
	vcdp->declBit(c+13,"chartest vga_interface_0 vga_sync_gen clk",-1);
	vcdp->declBit(c+14,"chartest vga_interface_0 vga_sync_gen reset",-1);
	vcdp->declBit(c+25,"chartest vga_interface_0 vga_sync_gen hsync_out",-1);
	vcdp->declBit(c+24,"chartest vga_interface_0 vga_sync_gen vsync_out",-1);
	vcdp->declBit(c+37,"chartest vga_interface_0 vga_sync_gen raster_visible",-1);
	vcdp->declBus(c+7,"chartest vga_interface_0 vga_sync_gen raster_x",-1,9,0);
	vcdp->declBus(c+8,"chartest vga_interface_0 vga_sync_gen raster_y",-1,9,0);
	vcdp->declBus(c+38,"chartest vga_interface_0 vga_sync_gen X_RES",-1,31,0);
	vcdp->declBus(c+39,"chartest vga_interface_0 vga_sync_gen Y_RES",-1,31,0);
	vcdp->declBus(c+40,"chartest vga_interface_0 vga_sync_gen hpixels",-1,31,0);
	vcdp->declBus(c+41,"chartest vga_interface_0 vga_sync_gen vlines",-1,31,0);
	vcdp->declBus(c+42,"chartest vga_interface_0 vga_sync_gen hpulse",-1,31,0);
	vcdp->declBus(c+43,"chartest vga_interface_0 vga_sync_gen vpulse",-1,31,0);
	vcdp->declBus(c+44,"chartest vga_interface_0 vga_sync_gen hbp",-1,31,0);
	vcdp->declBus(c+45,"chartest vga_interface_0 vga_sync_gen hfp",-1,31,0);
	vcdp->declBus(c+46,"chartest vga_interface_0 vga_sync_gen vbp",-1,31,0);
	vcdp->declBus(c+47,"chartest vga_interface_0 vga_sync_gen vfp",-1,31,0);
	vcdp->declBit(c+13,"chartest vga_interface_0 vga_text_gen clk_in",-1);
	vcdp->declBus(c+7,"chartest vga_interface_0 vga_text_gen raster_x",-1,9,0);
	vcdp->declBus(c+8,"chartest vga_interface_0 vga_text_gen raster_y",-1,9,0);
	vcdp->declBus(c+48,"chartest vga_interface_0 vga_text_gen mode_config",-1,8,0);
	vcdp->declBit(c+1,"chartest vga_interface_0 vga_text_gen pixel_out",-1);
	vcdp->declBus(c+31,"chartest vga_interface_0 vga_text_gen address_out",-1,23,0);
	vcdp->declBus(c+30,"chartest vga_interface_0 vga_text_gen data_in",-1,7,0);
	vcdp->declBus(c+5,"chartest vga_interface_0 vga_text_gen mem_val",-1,7,0);
	vcdp->declBus(c+2,"chartest vga_interface_0 vga_text_gen column",-1,6,0);
	vcdp->declBus(c+3,"chartest vga_interface_0 vga_text_gen row",-1,5,0);
	vcdp->declBus(c+9,"chartest vga_interface_0 vga_text_gen char_x",-1,2,0);
	vcdp->declBus(c+10,"chartest vga_interface_0 vga_text_gen char_y",-1,3,0);
	vcdp->declBit(c+13,"chartest vga_interface_0 vga_text_gen charset_rom clk",-1);
	vcdp->declBus(c+5,"chartest vga_interface_0 vga_text_gen charset_rom ascii_in",-1,7,0);
	vcdp->declBus(c+9,"chartest vga_interface_0 vga_text_gen charset_rom col",-1,2,0);
	vcdp->declBus(c+10,"chartest vga_interface_0 vga_text_gen charset_rom row",-1,3,0);
	vcdp->declBit(c+1,"chartest vga_interface_0 vga_text_gen charset_rom bit_out",-1);
	// Tracing: chartest vga_interface_0 vga_text_gen charset_rom romdata // Ignored: Wide memory > --trace-max-array ents at ../../Misc.v:38
    }
}

void Vchartest::traceFullThis__1(Vchartest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vchartest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit(c+1,((1U & (vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__charset_rom__DOT__romdata
				  [(((IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__mem_val) 
				     << 4U) | (0xfU 
					       & (IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_y)))] 
				  >> (7U & (~ (IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_x)))))));
	vcdp->fullBus(c+2,(vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__column),7);
	vcdp->fullBus(c+3,(vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__row),6);
	vcdp->fullBus(c+4,(vlTOPp->chartest__DOT__vga_rgb),8);
	vcdp->fullBus(c+5,(vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__mem_val),8);
	vcdp->fullBit(c+6,(vlTOPp->chartest__DOT__vga_interface_0__DOT__clk_50mhz));
	vcdp->fullBus(c+7,(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_x),10);
	vcdp->fullBus(c+8,(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_y),10);
	vcdp->fullBus(c+9,((7U & (IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_x))),3);
	vcdp->fullBus(c+10,((0xfU & (IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_y))),4);
	vcdp->fullBit(c+11,(vlTOPp->chartest__DOT__sysclk));
	vcdp->fullBit(c+12,(vlTOPp->i_clk));
	vcdp->fullBit(c+13,(vlTOPp->i_pixclk));
	vcdp->fullBit(c+14,(vlTOPp->i_reset));
	vcdp->fullBit(c+15,(vlTOPp->i_test));
	vcdp->fullBus(c+16,(vlTOPp->i_hm_width),13);
	vcdp->fullBus(c+17,(vlTOPp->i_hm_porch),13);
	vcdp->fullBus(c+18,(vlTOPp->i_hm_synch),13);
	vcdp->fullBus(c+19,(vlTOPp->i_hm_raw),13);
	vcdp->fullBus(c+20,(vlTOPp->i_vm_height),11);
	vcdp->fullBus(c+21,(vlTOPp->i_vm_porch),11);
	vcdp->fullBus(c+22,(vlTOPp->i_vm_synch),11);
	vcdp->fullBus(c+23,(vlTOPp->i_vm_raw),11);
	vcdp->fullBit(c+24,(vlTOPp->o_vga_vsync));
	vcdp->fullBit(c+25,(vlTOPp->o_vga_hsync));
	vcdp->fullBus(c+26,(vlTOPp->o_vga_red),8);
	vcdp->fullBus(c+27,(vlTOPp->o_vga_grn),8);
	vcdp->fullBus(c+28,(vlTOPp->o_vga_blu),8);
	vcdp->fullBit(c+29,(vlTOPp->o_interrupt));
	vcdp->fullBus(c+30,(vlTOPp->i_vram_data),8);
	vcdp->fullBus(c+31,(vlTOPp->o_vram_addr),24);
	vcdp->fullBus(c+32,(0x20U),32);
	vcdp->fullBus(c+33,(0xdU),32);
	vcdp->fullBus(c+34,(0xbU),32);
	vcdp->fullBus(c+35,(0x18U),32);
	vcdp->fullBit(c+36,(vlTOPp->chartest__DOT__o_vga_blanking));
	vcdp->fullBit(c+37,(0U));
	vcdp->fullBus(c+38,(0x280U),32);
	vcdp->fullBus(c+39,(0x1e0U),32);
	vcdp->fullBus(c+40,(0x320U),32);
	vcdp->fullBus(c+41,(0x209U),32);
	vcdp->fullBus(c+42,(0x60U),32);
	vcdp->fullBus(c+43,(2U),32);
	vcdp->fullBus(c+44,(0x2f0U),32);
	vcdp->fullBus(c+45,(0x290U),32);
	vcdp->fullBus(c+46,(0x1ecU),32);
	vcdp->fullBus(c+47,(0x1eaU),32);
	vcdp->fullBus(c+48,(0U),9);
    }
}
