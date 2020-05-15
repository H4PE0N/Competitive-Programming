
#include <stdlib.h>

#include "../../Competitive-Program-Folder/\
Competitive-Functions-Program-4/\
competitive-functions-program-4.h"

#include "../../Competitive-Program-Folder/\
Competitive-Functions-Program-5/\
competitive-functions-program-5.h"

int binary_decimal_enough_test(char* binary,
  int length, int decimal, int boolean)
{
  int output = binary_decimal_enough(binary, length,
    decimal);
  return (output == boolean);
}

int reduce_binary_decimal_test(char* binary,
  int length, int i_decimal, int o_decimal)
{
  i_decimal = reduce_binary_decimal(binary, length,
    i_decimal);
  return (i_decimal == o_decimal);
}

int allocate_binary_bit_test(char* i_binary,
  int length, int decimal, char* o_binary)
{
  i_binary = allocate_binary_bit(i_binary, length,
    decimal);
  return compare_strings_together(i_binary,o_binary,
    length);
}

int allocate_binary_bits_test(char* i_binary,
  int length, int decimal, char* o_binary)
{
  i_binary = allocate_binary_bits(i_binary, length,
    decimal);
  return compare_strings_together(i_binary,o_binary,
    length);
}

int calculate_real_length_test(int decimal,
  int i_length)
{
  int length = calculate_real_length(decimal);
  return (length == i_length);
}

int calculate_nearest_length_test(int decimal,
  int i_length)
{
  int length = calculate_nearest_length(decimal);
  return (length == i_length);
}

int convert_decimal_binary_test(int decimal,
  char* i_binary)
{
  char* binary = convert_decimal_binary(decimal);
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

int calculate_decimal_binary_test(char* binary,
  int index, int i_decimal, int o_decimal)
{
  i_decimal=calculate_decimal_binary(binary, index,
    i_decimal);
  return (i_decimal == o_decimal);
}

int convert_binary_decimal_test(char* binary,
  int i_decimal)
{
  int decimal = convert_binary_decimal(binary);
  return (decimal == i_decimal);
}
