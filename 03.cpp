/**
 * In this section, we will explore the inbuilt types of Nouns or what we call variables in a program

 * Here is the complete list of fundamental types in C++:
 * Group	Type
 * names,	Notes on size / precision *

 * Character types
 * char	Exactly one byte in size. At least 8 bits.
 * char16_t	Not smaller than char. At least 16 bits.
 * char32_t	Not smaller than char16_t. At least 32 bits.
 * wchar_t	Can represent the largest supported character set.

 * Integer types (signed)
 * signed char	Same size as char. At least 8 bits.
 * signed short int	Not smaller than char. At least 16 bits.
 * signed int	Not smaller than short. At least 16 bits.
 * signed long int	Not smaller than int. At least 32 bits.
 * signed long long int	Not smaller than long. At least 64 bits.

 * Integer types (unsigned)
 * unsigned char	(same size as their signed counterparts)
 * unsigned short int
 * unsigned int
 * unsigned long int
 * unsigned long long int

 * Floating-point types
 * float
 * double	Precision not less than float
 * long double	Precision not less than double

 * Boolean type
 * bool
 * Void type
 * void	no storage
 * Null pointer	decltype(nullptr)
**/

// Now let's use them in our code
int main(int argc, char const *argv[]) {
  char my_first_character; // this is going to be exactly 8 bits
  char16_t my_first_char16_t;
  char32_t my_first_char32_t;
  wchar_t this_is_the_longest_char_possible;
// now lets talk about number types, first Integers

  return 0;
}
