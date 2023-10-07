#!/bin/bash
gcc -c *.c
ar rc liballa.a *.o
ranlib liball.a
