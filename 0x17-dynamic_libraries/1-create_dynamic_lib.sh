#!/bin/bash
gcc -Wall -Werror -pedantic -Wextr -fPIC *.c -shared -o liball.so
