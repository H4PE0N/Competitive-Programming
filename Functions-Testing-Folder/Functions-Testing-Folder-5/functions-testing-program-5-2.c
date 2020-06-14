
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-5/\
library-functions-program-5.h"

int convert_binary_character_test(char* binary,
  char output)
{
  int character = convert_binary_character(binary);
  return (character == output);
}

int binary_range_between_test(char* binary,int minimum,
  int maximum, int output)
{
  int boolean = binary_range_between(binary, minimum,
    maximum); return (boolean == output);
}
