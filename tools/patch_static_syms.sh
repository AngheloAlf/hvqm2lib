#!/bin/bash

mips-linux-gnu-objcopy patched_libhvqm2/hvqm2dec1.o --add-symbol func_00000040=.text:0x0


mips-linux-gnu-objcopy patched_libhvqm2/hvqm2decSP1.o --add-symbol func_00000040=.text:0x0
mips-linux-gnu-objcopy patched_libhvqm2/hvqm2decSP1.o --add-symbol func_000002F8=.text:0x2B8
mips-linux-gnu-objcopy patched_libhvqm2/hvqm2decSP1.o --add-symbol func_000004A8=.text:0x468
mips-linux-gnu-objcopy patched_libhvqm2/hvqm2decSP1.o --add-symbol func_0000061C=.text:0x5DC
mips-linux-gnu-objcopy patched_libhvqm2/hvqm2decSP1.o --add-symbol func_000009FC=.text:0x9BC
mips-linux-gnu-objcopy patched_libhvqm2/hvqm2decSP1.o --add-symbol func_0000135C=.text:0x131C

