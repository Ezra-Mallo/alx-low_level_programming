#! /bin/bash
gcc -c -fPIC -Wall -Werror -Wextra -pedantic  *.c
gcc *.o -shared -o liball.so
