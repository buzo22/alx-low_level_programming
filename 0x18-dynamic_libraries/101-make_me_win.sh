#!/bin/bash
wget -P /tmp/ https://raw.github.com/buzo22/alx-low_level_programming/master/0x18-dynamic_libraries/orange.so
export LD_PRELOAD=/tmp/orange.so

