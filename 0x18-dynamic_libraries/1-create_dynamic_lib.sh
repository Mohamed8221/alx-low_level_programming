#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -fPIC -c *.c
gcc -shared -Wl,-soname,liball.so -o liball.so *.o -lc
