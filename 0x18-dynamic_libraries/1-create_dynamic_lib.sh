#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c -fPIC *.C
gcc -shared -0 liball.so *.0
export LD_LIBRARY_PATH=.:SLD_LIBRARY_PATH
