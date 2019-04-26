// C++ is an amazing language. It's very precise, very easy to read other's code
// Very easy to do projects in - From Robots to CrytoCurrency to everything
// Most of the world's greatest programmers use C++
// The entire linux, MacOS and Windows OS is written on C++

// Here's how it works in some easy steps

// Compilers compile your code to machine language or byte-code
// This compiled code is in 0s and 1s and computers can run it
// An example will be to compile and run the below program

// My first program in c++
#include <iostream> // This includes the iostream library which handles input output

int main() { // a main function is the main entry point for the program. This should return an int
  std::cout << "My first program in c++";
  // using the std (standard) namespace from iostream library
  // using the cout (Character OUTput) function in that library
  // using the << to push in (this is normal way of pushing data in linux) what we want to output
}

// you can run this program by pressing F5 in most IDEs
// If you press F6, it should move you to debug in most IDEs

// If you prefer compiling and running manually using CLI (commmand line interface)
// Then please use the following commands

// g++ 01.cpp
// The above command will compile to an executable called a.out. You can run it as
// ./a.out
// you are using ./ in the above command. The dot refers to current directory and the / points to within that directory
// if by anychance your compiler did not make it executable, on linux system we have permissions and you can grant them by
// chmod +x ./a.out
// the command here is CHange MODe + eXecutable followed by name of file
//
