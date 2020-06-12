
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-5/\
library-functions-program-5.h"

int convert_binary_character_test(char* binary,
  char i_character)
{
  int character = convert_binary_character(binary);
  return (character == i_character);
}

int generate_random_binary_test(int i_minimum,
  int i_maximum, int o_minimum, int o_maximum)
{
  char* binary = generate_random_binary(i_minimum,
    i_maximum);
  return binary_range_between(binary, o_minimum,
    o_maximum);
}

int binary_range_between_test(char* binary,
  int minimum, int maximum, int boolean)
{
  int output = binary_range_between(binary, minimum,
    maximum);
  return (output == boolean);
}
