
#include "../../Library-Functions-Folder/\
library-functions-headers.h"

int convert_string_binary_test(char* string,int length,
  char** output)
{
  char** binary = convert_string_binary(string,length);
  int width = sentence_string_length(binary);
  return compare_string_sentence(binary, output,length,
    width);
}

int convert_binary_character_test(char* binary,
  char output)
{
  char character = convert_binary_character(binary);
  return compare_character_variables(character,output);
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

int binary_left_shifting_test(char* binary, int length,
  char* output)
{
  binary = binary_left_shifting(binary, length);
  return compare_character_strings(binary, output,
    length);
}

int binary_right_shifting_test(char* binary,int length,
  char* output)
{
  binary = binary_right_shifting(binary, length);
  return compare_character_strings(binary, output,
    length);
}

int binary_and_operation_test(char* first,char* second,
  int length, char* output)
{
  char* binary = binary_and_operation(first, second,
    length);
  return compare_character_strings(binary, output,
    length);
}

int binary_or_operation_test(char* first, char* second,
  int length, char* output)
{
  char* binary = binary_or_operation(first, second,
    length);
  return compare_character_strings(binary, output,
    length);
}

int binary_xor_operation_test(char* first,char* second,
  int length, char* output)
{
  char* binary = binary_xor_operation(first, second,
    length);
  return compare_character_strings(binary, output,
    length);
}

int binary_not_operation_test(char* binary, int length,
  char* output)
{
  binary = binary_not_operation(binary, length);
  return compare_character_strings(binary, output,
    length);
}

int convert_array_binary_test(int* array, int length,
  char** output)
{
  char** binary = convert_array_binary(array, length);
  int width = sentence_string_length(binary);
  return compare_string_sentence(binary, output,length,
    width);
}
