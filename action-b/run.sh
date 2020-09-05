#!/bin/bash

sudo apt install build-essential
sudo apt install g++

mkdir -p bin
g++ -std=c++17 test.cc -o bin/test && bin/test
