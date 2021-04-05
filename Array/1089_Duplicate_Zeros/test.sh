#!/bin/bash
gcc -g -Wall -Wextra -Werror -fsanitize=address main.c $1
./a.out
rm a.out