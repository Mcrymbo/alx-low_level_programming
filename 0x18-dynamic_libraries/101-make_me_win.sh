#!/bin/bash
wget -P /tmp/ https://raw.github.com/Mcrymbo/alx-low_level_programming/master/0x18-dynamic_libraries/libprintf.so
export LD_PRELOAD=/tmp/libprintf.so
