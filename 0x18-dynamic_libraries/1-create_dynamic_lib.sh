#! /bin/bash
gcc -c -fPIC -Wall -Werror -Wextra -pendantic  *.c
gcc *.o -shared -o liball.so
