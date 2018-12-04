# lasa-complexmath

This is a C++ library built to handle mathematical operations and functions for complex numbers. It was created as a project for an [Advanced Computer Programming course](http://lasacs.com).

## Library Compilation & Testing on Windows

### Building the Static Library
1. Compile each individual C++ file in the terminal using `gcc -c src\File1.cpp src\File2.cpp` in the main directory
  1. The `-c` switch tells GCC to compile and assemble but not link the files
  2. This will create object files outside of the src folder
2. The static library can then be created using `ar rsv ComplexLibrary.a File1.o File2.o`
  1. The `r` switch replaces any previous libraries with that name
  2. The `s` switch creates an archive
  3. The `v` switch uses verbose to provide additional output
3. The library contents can be verified with `ar -t ComplexLibrary.a`

### Testing the Static Library
To run the Driver.cpp file, use the command `g++ -o src\Driver.cpp Driver.exe ComplexLibrary.a` in the main directory. This will create an executable for the Driver program that is linked to the static library. To run the file, type `Driver` into the terminal. This process works for any C++ file with a main method.

## Library Compilation & Testing in Unix
*This process is very similar to Windows with the exception of the use of a `.out` file in place of an executable*

### Building the Static Library
1. Compile each individual C++ file in the terminal using `gcc -c src\File1.cpp src\File2.cpp` in the main directory
  1. The `-c` switch tells GCC to compile and assemble but not link the files
  2. This will create object files outside of the src folder
2. The static library can then be created using `ar rsv ComplexLibrary.a File1.o File2.o`
  1. The `r` switch replaces any previous libraries with that name
  2. The `s` switch creates an archive
  3. The `v` switch uses verbose to provide additional output
3. The library contents can be verified with `ar -t ComplexLibrary.a`

### Testing the Static Library
To run the Driver.cpp file, use the command `g++ -o src\Driver.cpp Driver.out ComplexLibrary.a` in the main directory. This will create an executable for the Driver program that is linked to the static library. To run the file, type `Driver` into the terminal. This process works for any C++ file with a main method.
