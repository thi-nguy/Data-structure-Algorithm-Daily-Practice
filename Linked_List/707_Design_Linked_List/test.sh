#!/bin/bash
gcc -g -Wall -Wextra -Werror -fsanitize=address $1
./a.out
rm -rf a.out