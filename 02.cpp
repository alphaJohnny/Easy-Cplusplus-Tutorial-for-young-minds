// my second program in C++
/* here we also see this multi
line comment using asterisk and slash */

#include <iostream>
using namespace std; //this allows us to use all functions in this namespace as if they were defined in this file

int main ()
{
  cout << "Hello World! "; // we did not have to use std:: because we used namespace
  cout << "I'm a C++ program"; // we term it as accessing the function in an "unqualified manner"
  // Unqualified manner just really means that we did not spell it out completely
  // This is most often fine and dandy, unless you have 2 functions with the same name between 2 different files
  // At which point your compiler will bring it to your notice complaining about ambiguity
  // And will ask you to be "explicit", so the compiler knows which function you intend to refer to
}
