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

/**
 * At this point, let's talk about identifiers and keywords
 * As with any computer language, Identifiers are equivalent to Nouns in English. They identify the precise Object
 * Your program can store stuff (data) in these nouns and then manupulate them in the program
 * And keywords are like the grammer of language, a set of prebuilt nouns or verbs that the compiler has a special meaning for.
 * So the compiler does not like for us to use these.

 * A valid identifier is a sequence of one or more letters, digits, or underscore characters (_).
 * Spaces, punctuation marks, and symbols cannot be part of an identifier.
 * In addition, identifiers shall always begin with a letter. They can also begin with an underline character (_),
 * but such identifiers are -on most cases- considered reserved for compiler-specific keywords or external identifiers,
 * as well as identifiers containing two successive underscore characters anywhere. In no case can they begin with a digit.

C++ uses a number of keywords to identify operations and data descriptions; therefore, identifiers created by a programmer cannot match these keywords. The standard reserved keywords that cannot be used for programmer created identifiers are:

 *  1. alignas,
 *  2. alignof,
 *  3. and,
 *  4. and_eq,
 *  5. asm,
 *  6. auto,
 *  7. bitand,
 *  8. bitor,
 *  9. bool,
 * 10. break,
 * 11. case,
 * 12. catch,
 * 13. char,
 * 14. char16_t,
 * 15. char32_t,
 * 16. class,
 * 17. compl,
 * 18. const,
 * 19. constexpr,
 * 20. const_cast,
 * 21. continue,
 * 22. decltype,
 * 23. default,
 * 24. delete,
 * 25. do,
 * 26. double,
 * 27. dynamic_cast,
 * 28. else,
 * 29. enum,
 * 30. explicit,
 * 31. export,
 * 32. extern,
 * 33. false,
 * 34. float,
 * 35. for,
 * 36. friend,
 * 37. goto,
 * 38. if,
 * 39. inline,
 * 40. int,
 * 41. long,
 * 42. mutable,
 * 43. namespace,
 * 44. new,
 * 45. noexcept,
 * 46. not,
 * 47. not_eq,
 * 48. nullptr,
 * 49. operator,
 * 50. or,
 * 51. or_eq,
 * 52. private,
 * 53. protected,
 * 54. public,
 * 55. register,
 * 56. reinterpret_cast,
 * 57. return,
 * 58. short,
 * 59. signed,
 * 60. sizeof,
 * 61. static,
 * 62. static_assert,
 * 63. static_cast,
 * 64. struct,
 * 65. switch,
 * 66. template,
 * 67. this,
 * 69. thread_local,
 * 70. throw,
 * 71. true,
 * 72. try,
 * 73. typedef,
 * 74. typeid,
 * 75. typename,
 * 76. union,
 * 77. unsigned,
 * 78. using,
 * 79. virtual,
 * 80. void,
 * 81. volatile,
 * 82. wchar_t,
 * 83. while,
 * 84. xor,
 * 85. xor_eq
**/
