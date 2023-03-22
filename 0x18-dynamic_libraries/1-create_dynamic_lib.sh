#!/bin/bash
gcc -wall -wextra -werror -pedantic -c -fPIC *.c
gcc -shared -0 liball.so *.0
export LD_LIBRARY_PATH=.:SLD_LIBRARY_PATH

