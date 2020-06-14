
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-5/\
library-functions-program-5.h"

int binary_integer_enough_test(char* binary,int length,
  int integer, int output)
{
  int boolean = binary_integer_enough(binary, length,
    integer); return (boolean == output);
}

int convert_binary_integer_test(char* binary,
  int output)
{
  int integer = convert_binary_integer(binary);
  return (integer == output);
}

int calculate_bit_integer_test(int integer, int output)
{
  int product = calculate_bit_integer(integer);
  return (product == output);
}

int convert_integer_binary_test(int integer,
  char* output)
{
  char* binary = convert_integer_binary(integer);
  int length = calculate_string_length(binary);
  return compare_character_strings(binary, output,
    length);
}

int reduce_binary_integer_test(char* binary,int length,
  int integer, int output)
{
  integer = reduce_binary_integer(binary, length,
    integer); return (integer == output);
}

int increase_binary_integer_test(char*binary,int index,
  int integer, int output)
{
  integer = increase_binary_integer(binary, index,
    integer); return (integer == output);
}

int allocate_binary_bit_test(char* binary, int length,
  int integer, char* output)
{
  binary = allocate_binary_bit(binary,length,integer);
  return compare_character_strings(binary, output,
    length);
}

int calculate_nearest_length_test(int integer,
  int output)
{
  int length = calculate_nearest_length(integer);
  return (length == output);
}

int calculate_real_length_test(int integer,int output)
{
  int length = calculate_real_length(integer);
  return (length == output);
}

int convert_character_binary_test(char character,
  char* output)
{
  char* binary = convert_character_binary(character);
  int length = calculate_string_length(binary);
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
