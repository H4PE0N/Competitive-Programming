
#include "../../Library-Functions-Folder/\
library-functions-headers.h"

int binary_integer_enough_test(char* binary,int length,
  int integer, int output)
{
  int boolean = binary_integer_enough(binary, length,
    integer);
  return compare_integer_variables(boolean, output);
}

int calculate_bit_integer_test(int binary_index,
  int output)
{
  int integer = calculate_bit_integer(binary_index);
  return compare_integer_variables(integer, output);
}

int reduce_binary_integer_test(char* binary,int length,
  int integer, int output)
{
  integer = reduce_binary_integer(binary, length,
    integer);
  return compare_integer_variables(integer, output);
}

int convert_binary_integer_test(char* binary,
  int output)
{
  int integer = convert_binary_integer(binary);
  return compare_integer_variables(integer, output);
}

int increase_binary_integer_test(char*binary,int index,
  int integer, int output)
{
  integer = increase_binary_integer(binary, index,
    integer);
  return compare_integer_variables(integer, output);
}

int allocate_binary_bit_test(char* binary, int length,
  int integer, char* output)
{
  binary = allocate_binary_bit(binary,length,integer);
  return compare_character_strings(binary, output,
    length);
}

int nearest_binary_length_test(int integer,int output)
{
  int length = nearest_binary_length(integer);
  return compare_integer_variables(length, output);
}

int convert_integer_binary_test(int integer,
  char* output)
{
  char* binary = convert_integer_binary(integer);
  int length = character_string_length(binary)
  return compare_character_strings(binary, output,
    length);
}

int actual_binary_length_test(int integer, int output)
{
  int length = actual_binary_length(integer);
  return compare_integer_variables(length, output);
}

int convert_character_binary_test(char character,
  char* output)
{
  char* binary = convert_character_binary(character);
  int length = character_string_length(binary);
  return compare_character_strings(binary, output,
    length);
}

int allocate_binary_bits_test(char* binary, int length,
  int integer, char* output)
{
  binary = allocate_binary_bits(binary,length,integer);
  return compare_character_strings(binary, output,
    length);
}

int convert_binary_string_test(char**binary,int length,
  char* output)
{
  char* string = convert_binary_string(binary, length);
  return compare_character_strings(string, output,
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
