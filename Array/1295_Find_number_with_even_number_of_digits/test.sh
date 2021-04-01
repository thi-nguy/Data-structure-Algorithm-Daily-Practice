#!/bin/bash
gcc -g -Wall -Wextra -Werror -fsanitize=address main.c
./a.out
rm -rf a.out
