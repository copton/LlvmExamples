#!/bin/bash

set -x

clang test.c -O0 -march=i486 -S -emit-llvm -o -
