
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-5/\
library-functions-program-5.h"

int calculate_bit_integer_test(int integer,
  int i_product)
{
  int product = calculate_bit_integer(integer);
  return (product == i_product);
}

int binary_integer_enough_test(char* binary,
  int length, int integer, int boolean)
{
  int output = binary_integer_enough(binary,length,
    integer);
  return (output == boolean);
}

int reduce_binary_integer_test(char* binary,
  int length, int i_integer, int o_integer)
{
  i_integer = reduce_binary_integer(binary, length,
    i_integer);
  return (i_integer == o_integer);
}

int allocate_binary_bit_test(char* i_binary,
  int length, int integer, char* o_binary)
{
  i_binary = allocate_binary_bit(i_binary, length,
    integer);
  return compare_strings_together(i_binary,o_binary,
    length);
}

int allocate_binary_bits_test(char* i_binary,
  int length, int integer, char* o_binary)
{
  i_binary = allocate_binary_bits(i_binary, length,
    integer);
  return compare_strings_together(i_binary,o_binary,
    length);
}

int calculate_real_length_test(int integer,
  int i_length)
{
  int length = calculate_real_length(integer);
  return (length == i_length);
}

int calculate_nearest_length_test(int integer,
  int i_length)
{
  int length = calculate_nearest_length(integer);
  return (length == i_length);
}

int convert_integer_binary_test(int integer,
  char* i_binary)
{
  char* binary = convert_integer_binary(integer);
  int length = calculate_string_length(binary);
  return compare_strings_together(binary, i_binary,
    length);
}

int convert_character_binary_test(char character,
  char* i_binary)
{
  char* binary=convert_character_binary(character);
  int length = calculate_string_length(binary);
  return compare_strings_together(binary, i_binary,
    length);
}

int increase_binary_integer_test(char* binary,
  int index, int i_integer, int o_integer)
{
  i_integer=increase_binary_integer(binary, index,
    i_integer);
  return (i_integer == o_integer);
}

int convert_binary_integer_test(char* binary,
  int i_integer)
{
  int integer = convert_binary_integer(binary);
  return (integer == i_integer);
}
