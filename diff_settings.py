#!/usr/bin/env python3

def apply(config, args):
    config["source_directories"] = ["./src", "./include", "./asm"]
    config["objdump_flags"] = ["-Mreg-names=32"]
    # config["objdump_flags"].append("-Mno-aliases")
    config["makeflags"] = ["KEEP_MDEBUG=1", "WERROR=0"]
