// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vchartest__Syms.h"


//======================

void Vchartest::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    Vchartest* t=(Vchartest*)userthis;
    Vchartest__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void Vchartest::traceChgThis(Vchartest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vchartest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & ((vlTOPp->__Vm_traceActivity 
				| (vlTOPp->__Vm_traceActivity 
				   >> 1U)) | (vlTOPp->__Vm_traceActivity 
					      >> 3U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 3U))))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((4U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__5(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((8U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__6(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((0x10U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__7(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__8(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void Vchartest::traceChgThis__2(Vchartest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vchartest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+1,((1U & (vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__charset_rom__DOT__romdata
				 [(((IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__mem_val) 
				    << 4U) | (0xfU 
					      & (IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_y)))] 
				 >> (7U & (~ (IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_x)))))));
    }
}

void Vchartest::traceChgThis__3(Vchartest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vchartest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+2,(vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__column),7);
	vcdp->chgBus(c+3,(vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__row),6);
    }
}

void Vchartest::traceChgThis__4(Vchartest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vchartest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+4,(vlTOPp->chartest__DOT__vga_rgb),8);
	vcdp->chgBus(c+5,(vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__mem_val),8);
    }
}

void Vchartest::traceChgThis__5(Vchartest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vchartest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+6,(vlTOPp->chartest__DOT__vga_interface_0__DOT__clk_50mhz));
    }
}

void Vchartest::traceChgThis__6(Vchartest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vchartest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus(c+7,(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_x),10);
	vcdp->chgBus(c+8,(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_y),10);
	vcdp->chgBus(c+9,((7U & (IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_x))),3);
	vcdp->chgBus(c+10,((0xfU & (IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_y))),4);
    }
}

void Vchartest::traceChgThis__7(Vchartest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vchartest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+11,(vlTOPp->chartest__DOT__sysclk));
    }
}

void Vchartest::traceChgThis__8(Vchartest__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    Vchartest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit(c+12,(vlTOPp->i_clk));
	vcdp->chgBit(c+13,(vlTOPp->i_pixclk));
	vcdp->chgBit(c+14,(vlTOPp->i_reset));
	vcdp->chgBit(c+15,(vlTOPp->i_test));
	vcdp->chgBus(c+16,(vlTOPp->i_hm_width),13);
	vcdp->chgBus(c+17,(vlTOPp->i_hm_porch),13);
	vcdp->chgBus(c+18,(vlTOPp->i_hm_synch),13);
	vcdp->chgBus(c+19,(vlTOPp->i_hm_raw),13);
	vcdp->chgBus(c+20,(vlTOPp->i_vm_height),11);
	vcdp->chgBus(c+21,(vlTOPp->i_vm_porch),11);
	vcdp->chgBus(c+22,(vlTOPp->i_vm_synch),11);
	vcdp->chgBus(c+23,(vlTOPp->i_vm_raw),11);
	vcdp->chgBit(c+24,(vlTOPp->o_vga_vsync));
	vcdp->chgBit(c+25,(vlTOPp->o_vga_hsync));
	vcdp->chgBus(c+26,(vlTOPp->o_vga_red),8);
	vcdp->chgBus(c+27,(vlTOPp->o_vga_grn),8);
	vcdp->chgBus(c+28,(vlTOPp->o_vga_blu),8);
	vcdp->chgBit(c+29,(vlTOPp->o_interrupt));
	vcdp->chgBus(c+30,(vlTOPp->i_vram_data),8);
	vcdp->chgBus(c+31,(vlTOPp->o_vram_addr),24);
    }
}
