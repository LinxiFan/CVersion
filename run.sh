#!/bin/bash
gcc -std=c90   main.c -o version 2> /dev/null && ./version
gcc -std=c99   main.c -o version 2> /dev/null && ./version
gcc -std=c11   main.c -o version 2> /dev/null && ./version
g++ -std=c++98 main.c -o version 2> /dev/null && ./version
g++ -std=c++11 main.c -o version 2> /dev/null && ./version
rm version
