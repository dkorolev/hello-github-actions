#!/bin/bash

echo One

uname -a

echo Two

ls -R

echo Three

cd action-b

ls -R

mkdir -p bin
g++ -std=c++17 test.cc -o bin/test && bin/test
