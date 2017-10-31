#include <stdio.h>

#include "grbl.h"



int main(int argc, char** argv) {
	settings_init();
	gc_init();
	plan_reset();

    gc_execute_line("G0 G49 G40  G17 G80 G50 G90 ");
    gc_execute_line("M6 T0");
    gc_execute_line("G20 (Inch)");
    gc_execute_line("M03 S500");
    gc_execute_line("M08");
    gc_execute_line("G90");
    gc_execute_line("G00 G43 H0  Z0.1");
    gc_execute_line("G73 X-7 Y-4 Z-0.75 Q0.2 R0.1 F10");
    gc_execute_line("X-5.8889");
    gc_execute_line("X-4.7778");
    gc_execute_line("X-3.6667");
    gc_execute_line("X-2.5556");
    gc_execute_line("X-1.4444");
    gc_execute_line("X-0.3333");
    gc_execute_line("X0.7778");
    gc_execute_line("X1.8889");
    gc_execute_line("X3");
    gc_execute_line("Y-2");
    gc_execute_line("X1.8889");
    gc_execute_line("X0.7778");
    gc_execute_line("X-0.3333");
    gc_execute_line("X-1.4444");
    gc_execute_line("X-2.5556");
    gc_execute_line("X-3.6667");
    gc_execute_line("X-4.7778");
    gc_execute_line("X-5.8889");
    gc_execute_line("X-7");
    gc_execute_line("Y0");
    gc_execute_line("X-5.8889");
    gc_execute_line("X-4.7778");
    gc_execute_line("X-3.6667");
    gc_execute_line("X-2.5556");
    gc_execute_line("X-1.4444");
    gc_execute_line("X-0.3333");
    gc_execute_line("X0.7778");
    gc_execute_line("X1.8889");
    gc_execute_line("X3");
    gc_execute_line("G80");
    gc_execute_line("M5 M9");
    gc_execute_line("X-7  Y-4");
    gc_execute_line("M30");

	return 0;
}