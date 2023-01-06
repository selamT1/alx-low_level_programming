#!/bin/bash
cc -Wall -pedantic -Werror -Wextra -c *.c
ar rcs liball.a *.o
ranlib liball.a
