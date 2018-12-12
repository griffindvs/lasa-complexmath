# lasa-complexmath

This is a C++ library built to handle mathematical operations and functions for complex numbers. It was created as a project for an [Advanced Computer Programming course](http://lasacs.com).

## Library Compilation & Testing

### Building the Static Library in Unix (Git Bash on Windows)
1. Compile each individual C++ file in the terminal using `gcc -c src/*.cpp` in the main directory
   - The `-c` switch tells GCC to compile and assemble but not link the files
   - The `*.cpp` will compile every C++ file in the src folder
   - This will create object files outside of the src folder
2. The static library can then be created using `ar rsv ComplexLibrary.a *.o`
   - The `r` switch replaces any previous libraries with that name
   - The `s` switch creates an archive
   - The `v` switch uses verbose to provide additional output
   - The `*.o` will add every compiled C++ file in the directory
3. The library contents can be verified with `ar -t ComplexLibrary.a`

### Testing the Static Library for Windows
To run the ComplexRunner.cpp file, use the command `g++ ComplexRunner.cpp -o ComplexRunner.exe ComplexLibrary.a` in the main directory. This will create `ComplexRunner.exe` that is linked to the static library. To run the file, type `ComplexRunner` into the terminal.
