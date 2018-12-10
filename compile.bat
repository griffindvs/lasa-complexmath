@echo off
gcc -c src\*.cpp
ar rsv ComplexLibrary.a *.o
g++ ComplexRunner.cpp -o ComplexRunner.exe ComplexLibrary.a
pause