
#include "../../Library-Functions-Folder/\
library-functions-headers.h"

int convert_string_binary_test(char* string,int length,
  char** output)
{
  char** binary = convert_string_binary(string,length);
  return compare_string_sentence(binary, output, length,
    8);
}

int convert_binary_character_test(char* binary,
  char output)
{
  return (convert_binary_character(binary) == output);
}

int binary_range_between_test(char* binary,int minimum,
  int maximum, int output)
{
  int boolean = binary_range_between(binary, minimum,
    maximum);
  return compare_integer_variables(boolean, output);
}

int convert_binary_array_test(char** binary,int length,
  int* output)
{
  int* array = convert_binary_array(binary, length);
  return compare_integer_arrays(array, output, length);
}
