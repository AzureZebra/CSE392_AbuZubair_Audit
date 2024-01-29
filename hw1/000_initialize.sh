#!/bin/bash

module load mpl
make hello
#ibrun -n 2 hello
make commrank
#ibrun -n 10 commrank
make prime
#ibrun -n 100 prime
