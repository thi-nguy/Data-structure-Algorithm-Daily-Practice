#!/bin/bash
gcc -g -Wall -Wextra -Werror -fsanitize=address main.c -o mco
./mco $1
rm -rf mco