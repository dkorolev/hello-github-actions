#!/bin/bash

cd action-b

which g++
which clang
which clang++

g++ --version
clang --version
clang++ --version

mkdir -p bin
clang++ -std=c++17 test.cc -o bin/test && bin/test
