#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -shared -fPIC -o liball.so *.c
