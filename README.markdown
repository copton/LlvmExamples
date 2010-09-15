Examples and tutorials for the LLVM compiler framework

## links
 * [LLVM](http://www.llvm.org/)
 * [clang](http://clang.llvm.org/)

## clang
 * clang file.c -fsyntax-only (check for correctness)
 * clang file.c -S -emit-llvm -o - (print out unoptimized llvm code)
 * clang file.c -S -emit-llvm -o - -O3
 * clang file.c -S -O3 -o - (output native machine code)
