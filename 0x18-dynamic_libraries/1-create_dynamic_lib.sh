#!/bin/bash
gcc -fPIC -c *.c
gcc -shared *.O -o liball.so
