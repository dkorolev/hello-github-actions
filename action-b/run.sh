#!/bin/bash

uname -a

mkdir -p bin
g++ -std=c++17 test.cc -o bin/test && bin/test
