// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vchartest.h for the primary calling header

#include "Vchartest.h"
#include "Vchartest__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(Vchartest) {
    Vchartest__Syms* __restrict vlSymsp = __VlSymsp = new Vchartest__Syms(this, name());
    Vchartest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vchartest::__Vconfigure(Vchartest__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vchartest::~Vchartest() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void Vchartest::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vchartest::eval\n"); );
    Vchartest__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vchartest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

void Vchartest::_eval_initial_loop(Vchartest__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) {
	    // About to fail, so enable debug to see what's not settling.
	    // Note you must run make with OPT=-DVL_DEBUG for debug prints.
	    int __Vsaved_debug = Verilated::debug();
	    Verilated::debug(1);
	    __Vchange = _change_request(vlSymsp);
	    Verilated::debug(__Vsaved_debug);
	    VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
	} else {
	    __Vchange = _change_request(vlSymsp);
	}
    } while (VL_UNLIKELY(__Vchange));
}

//--------------------
// Internal Methods

VL_INLINE_OPT void Vchartest::_sequent__TOP__1(Vchartest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchartest::_sequent__TOP__1\n"); );
    Vchartest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../VGA_modes.v:46
    vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__mem_val 
	= vlTOPp->i_vram_data;
    // ALWAYS at ../../VGA_CTL.v:61
    vlTOPp->chartest__DOT__vga_rgb = ((1U & (vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__charset_rom__DOT__romdata
					     [(((IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__mem_val) 
						<< 4U) 
					       | (0xfU 
						  & (IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_y)))] 
					     >> (7U 
						 & (~ (IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_x)))))
				       ? 0xffU : 0U);
    vlTOPp->o_vga_red = (0xe0U & ((IData)(vlTOPp->chartest__DOT__vga_rgb) 
				  << 5U));
    vlTOPp->o_vga_grn = (0xe0U & ((IData)(vlTOPp->chartest__DOT__vga_rgb) 
				  << 2U));
    vlTOPp->o_vga_blu = (0xc0U & (IData)(vlTOPp->chartest__DOT__vga_rgb));
}

VL_INLINE_OPT void Vchartest::_sequent__TOP__2(Vchartest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchartest::_sequent__TOP__2\n"); );
    Vchartest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../Misc.v:9
    vlTOPp->chartest__DOT__vga_interface_0__DOT__clk_50mhz 
	= ((IData)(vlTOPp->i_reset) & (~ (IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__clk_50mhz)));
}

VL_INLINE_OPT void Vchartest::_sequent__TOP__3(Vchartest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchartest::_sequent__TOP__3\n"); );
    Vchartest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIG16(__Vdly__chartest__DOT__vga_interface_0__DOT__px_address_x,9,0);
    VL_SIG16(__Vdly__chartest__DOT__vga_interface_0__DOT__px_address_y,9,0);
    // Body
    __Vdly__chartest__DOT__vga_interface_0__DOT__px_address_y 
	= vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_y;
    __Vdly__chartest__DOT__vga_interface_0__DOT__px_address_x 
	= vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_x;
    // ALWAYS at ../../VGA_sync_generator.v:30
    if (vlTOPp->i_reset) {
	__Vdly__chartest__DOT__vga_interface_0__DOT__px_address_x = 0U;
	__Vdly__chartest__DOT__vga_interface_0__DOT__px_address_y = 0U;
    } else {
	if ((0x31fU > (IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_x))) {
	    __Vdly__chartest__DOT__vga_interface_0__DOT__px_address_x 
		= (0x3ffU & ((IData)(1U) + (IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_x)));
	} else {
	    __Vdly__chartest__DOT__vga_interface_0__DOT__px_address_y 
		= (0x3ffU & ((0x208U > (IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_y))
			      ? ((IData)(1U) + (IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_y))
			      : 0U));
	    __Vdly__chartest__DOT__vga_interface_0__DOT__px_address_x = 0U;
	}
    }
    vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_x 
	= __Vdly__chartest__DOT__vga_interface_0__DOT__px_address_x;
    vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_y 
	= __Vdly__chartest__DOT__vga_interface_0__DOT__px_address_y;
    vlTOPp->o_vga_hsync = (1U & (((0x290U < (IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_x)) 
				  & (0x2f0U > (IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_x)))
				  ? 0U : 1U));
    vlTOPp->o_vga_vsync = (1U & (((0x1eaU < (IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_y)) 
				  & (0x1ecU > (IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_y)))
				  ? 0U : 1U));
    // ALWAYS at ../../VGA_modes.v:26
    vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__column 
	= (0x7fU & ((IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_x) 
		    >> 3U));
    vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__row 
	= (0x3fU & ((IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_y) 
		    >> 4U));
    vlTOPp->o_vram_addr = 0x50U;
    vlTOPp->o_vram_addr = (0xffffffU & ((vlTOPp->o_vram_addr 
					 * (IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__row)) 
					+ (IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__column)));
}

void Vchartest::_initial__TOP__4(Vchartest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchartest::_initial__TOP__4\n"); );
    Vchartest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint  all: 
    VL_SIGW(__Vtemp3,127,0,4);
    // Body
    // INITIAL at ../../Misc.v:40
    __Vtemp3[0U] = 0x6c697374U;
    __Vtemp3[1U] = 0x524f4d2eU;
    __Vtemp3[2U] = 0x4741385fU;
    __Vtemp3[3U] = 0x56U;
    VL_READMEM_W(true,8,4096, 0,4, __Vtemp3, vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__charset_rom__DOT__romdata
		 ,0,~0);
}

void Vchartest::_settle__TOP__5(Vchartest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchartest::_settle__TOP__5\n"); );
    Vchartest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->o_vga_red = (0xe0U & ((IData)(vlTOPp->chartest__DOT__vga_rgb) 
				  << 5U));
    vlTOPp->o_vga_grn = (0xe0U & ((IData)(vlTOPp->chartest__DOT__vga_rgb) 
				  << 2U));
    vlTOPp->o_vga_blu = (0xc0U & (IData)(vlTOPp->chartest__DOT__vga_rgb));
    vlTOPp->o_vga_hsync = (1U & (((0x290U < (IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_x)) 
				  & (0x2f0U > (IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_x)))
				  ? 0U : 1U));
    vlTOPp->o_vga_vsync = (1U & (((0x1eaU < (IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_y)) 
				  & (0x1ecU > (IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_y)))
				  ? 0U : 1U));
    // ALWAYS at ../../VGA_modes.v:26
    vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__column 
	= (0x7fU & ((IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_x) 
		    >> 3U));
    vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__row 
	= (0x3fU & ((IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__px_address_y) 
		    >> 4U));
    vlTOPp->o_vram_addr = 0x50U;
    vlTOPp->o_vram_addr = (0xffffffU & ((vlTOPp->o_vram_addr 
					 * (IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__row)) 
					+ (IData)(vlTOPp->chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__column)));
}

VL_INLINE_OPT void Vchartest::_sequent__TOP__6(Vchartest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchartest::_sequent__TOP__6\n"); );
    Vchartest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at ../../Misc.v:9
    vlTOPp->chartest__DOT__sysclk = ((IData)(vlTOPp->i_reset) 
				     & (~ (IData)(vlTOPp->chartest__DOT__sysclk)));
}

void Vchartest::_eval(Vchartest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchartest::_eval\n"); );
    Vchartest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->i_pixclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__i_pixclk)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->i_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__i_clk)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->__Vm_traceActivity = (4U | vlTOPp->__Vm_traceActivity);
    }
    if ((((IData)(vlTOPp->i_pixclk) & (~ (IData)(vlTOPp->__Vclklast__TOP__i_pixclk))) 
	 | ((IData)(vlTOPp->i_reset) & (~ (IData)(vlTOPp->__Vclklast__TOP__i_reset))))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
	vlTOPp->__Vm_traceActivity = (8U | vlTOPp->__Vm_traceActivity);
    }
    if (((IData)(vlTOPp->__VinpClk__TOP__chartest__DOT__vga_interface_0__DOT__clk_50mhz) 
	 & (~ (IData)(vlTOPp->__Vclklast__TOP____VinpClk__TOP__chartest__DOT__vga_interface_0__DOT__clk_50mhz)))) {
	vlTOPp->_sequent__TOP__6(vlSymsp);
	vlTOPp->__Vm_traceActivity = (0x10U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__i_pixclk = vlTOPp->i_pixclk;
    vlTOPp->__Vclklast__TOP__i_clk = vlTOPp->i_clk;
    vlTOPp->__Vclklast__TOP__i_reset = vlTOPp->i_reset;
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__chartest__DOT__vga_interface_0__DOT__clk_50mhz 
	= vlTOPp->__VinpClk__TOP__chartest__DOT__vga_interface_0__DOT__clk_50mhz;
    vlTOPp->__VinpClk__TOP__chartest__DOT__vga_interface_0__DOT__clk_50mhz 
	= vlTOPp->chartest__DOT__vga_interface_0__DOT__clk_50mhz;
}

void Vchartest::_eval_initial(Vchartest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchartest::_eval_initial\n"); );
    Vchartest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__i_pixclk = vlTOPp->i_pixclk;
    vlTOPp->__Vclklast__TOP__i_clk = vlTOPp->i_clk;
    vlTOPp->__Vclklast__TOP__i_reset = vlTOPp->i_reset;
    vlTOPp->_initial__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__chartest__DOT__vga_interface_0__DOT__clk_50mhz 
	= vlTOPp->__VinpClk__TOP__chartest__DOT__vga_interface_0__DOT__clk_50mhz;
}

void Vchartest::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchartest::final\n"); );
    // Variables
    Vchartest__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vchartest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vchartest::_eval_settle(Vchartest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchartest::_eval_settle\n"); );
    Vchartest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData Vchartest::_change_request(Vchartest__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchartest::_change_request\n"); );
    Vchartest* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->chartest__DOT__vga_interface_0__DOT__clk_50mhz ^ vlTOPp->__Vchglast__TOP__chartest__DOT__vga_interface_0__DOT__clk_50mhz));
    VL_DEBUG_IF( if(__req && ((vlTOPp->chartest__DOT__vga_interface_0__DOT__clk_50mhz ^ vlTOPp->__Vchglast__TOP__chartest__DOT__vga_interface_0__DOT__clk_50mhz))) VL_DBG_MSGF("        CHANGE: ../../VGA_CTL.v:27: chartest.vga_interface_0.clk_50mhz\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__chartest__DOT__vga_interface_0__DOT__clk_50mhz 
	= vlTOPp->chartest__DOT__vga_interface_0__DOT__clk_50mhz;
    return __req;
}

#ifdef VL_DEBUG
void Vchartest::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchartest::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((i_clk & 0xfeU))) {
	Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((i_pixclk & 0xfeU))) {
	Verilated::overWidthError("i_pixclk");}
    if (VL_UNLIKELY((i_reset & 0xfeU))) {
	Verilated::overWidthError("i_reset");}
    if (VL_UNLIKELY((i_test & 0xfeU))) {
	Verilated::overWidthError("i_test");}
    if (VL_UNLIKELY((i_hm_width & 0xe000U))) {
	Verilated::overWidthError("i_hm_width");}
    if (VL_UNLIKELY((i_hm_porch & 0xe000U))) {
	Verilated::overWidthError("i_hm_porch");}
    if (VL_UNLIKELY((i_hm_synch & 0xe000U))) {
	Verilated::overWidthError("i_hm_synch");}
    if (VL_UNLIKELY((i_hm_raw & 0xe000U))) {
	Verilated::overWidthError("i_hm_raw");}
    if (VL_UNLIKELY((i_vm_height & 0xf800U))) {
	Verilated::overWidthError("i_vm_height");}
    if (VL_UNLIKELY((i_vm_porch & 0xf800U))) {
	Verilated::overWidthError("i_vm_porch");}
    if (VL_UNLIKELY((i_vm_synch & 0xf800U))) {
	Verilated::overWidthError("i_vm_synch");}
    if (VL_UNLIKELY((i_vm_raw & 0xf800U))) {
	Verilated::overWidthError("i_vm_raw");}
}
#endif // VL_DEBUG

void Vchartest::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vchartest::_ctor_var_reset\n"); );
    // Body
    i_clk = VL_RAND_RESET_I(1);
    i_pixclk = VL_RAND_RESET_I(1);
    i_reset = VL_RAND_RESET_I(1);
    i_test = VL_RAND_RESET_I(1);
    i_hm_width = VL_RAND_RESET_I(13);
    i_hm_porch = VL_RAND_RESET_I(13);
    i_hm_synch = VL_RAND_RESET_I(13);
    i_hm_raw = VL_RAND_RESET_I(13);
    i_vm_height = VL_RAND_RESET_I(11);
    i_vm_porch = VL_RAND_RESET_I(11);
    i_vm_synch = VL_RAND_RESET_I(11);
    i_vm_raw = VL_RAND_RESET_I(11);
    o_vga_vsync = VL_RAND_RESET_I(1);
    o_vga_hsync = VL_RAND_RESET_I(1);
    o_vga_red = VL_RAND_RESET_I(8);
    o_vga_grn = VL_RAND_RESET_I(8);
    o_vga_blu = VL_RAND_RESET_I(8);
    o_interrupt = VL_RAND_RESET_I(1);
    i_vram_data = VL_RAND_RESET_I(8);
    o_vram_addr = VL_RAND_RESET_I(24);
    chartest__DOT__vga_rgb = VL_RAND_RESET_I(8);
    chartest__DOT__sysclk = VL_RAND_RESET_I(1);
    chartest__DOT__o_vga_blanking = VL_RAND_RESET_I(1);
    chartest__DOT__vga_interface_0__DOT__clk_50mhz = VL_RAND_RESET_I(1);
    chartest__DOT__vga_interface_0__DOT__px_address_x = VL_RAND_RESET_I(10);
    chartest__DOT__vga_interface_0__DOT__px_address_y = VL_RAND_RESET_I(10);
    chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__mem_val = VL_RAND_RESET_I(8);
    chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__column = VL_RAND_RESET_I(7);
    chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__row = VL_RAND_RESET_I(6);
    { int __Vi0=0; for (; __Vi0<4096; ++__Vi0) {
	    chartest__DOT__vga_interface_0__DOT__vga_text_gen__DOT__charset_rom__DOT__romdata[__Vi0] = VL_RAND_RESET_I(8);
    }}
    __VinpClk__TOP__chartest__DOT__vga_interface_0__DOT__clk_50mhz = VL_RAND_RESET_I(1);
    __Vchglast__TOP__chartest__DOT__vga_interface_0__DOT__clk_50mhz = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}
