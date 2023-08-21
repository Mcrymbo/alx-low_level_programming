#!/bin/bash
gcc -c -Werror -Wextra -pedantic -Wall -std=gnu89 -fpic *.c
gcc -shared -o liball.so *.o
