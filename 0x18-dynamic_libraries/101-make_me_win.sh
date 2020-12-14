#!/bin/bash
curl -Lso "$HOME/rand.so" "https://github.com/benhassenwael/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/rand.so"
export LD_PRELOAD=$HOME/rand.so
