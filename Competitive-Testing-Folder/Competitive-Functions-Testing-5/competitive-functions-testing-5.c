
/* This program contains functions that test the
functions in file competitive-functions-program-5.h */

#include <stdlib.h>

#include "../../Competitive-Program-Folder/\
Competitive-Functions-Program-4/\
competitive-functions-program-4.h"

#include "../../Competitive-Program-Folder/\
Competitive-Functions-Program-5/\
competitive-functions-program-5.h"

// Inputs: binary, total length, decimal, boolean
int binary_decimal_enough_test(char* binary,
  int t_length, int decimal, int boolean)
{
  int output = binary_decimal_enough(binary, t_length,
    decimal);
  return (output == boolean);
}

/* Inputs: binary, total length, input decimal,
output decimal; */
int reduce_binary_decimal_test(char* binary,
  int t_length, int i_decimal, int o_decimal)
{
  i_decimal = reduce_binary_decimal(binary, t_length,
    i_decimal);
  return (i_decimal == o_decimal);
}

/* Inputs: input binary, total length, decimal,
output binary; */
int allocate_binary_value_test(char* i_binary,
  int t_length, int decimal, char* o_binary)
{
  i_binary = allocate_binary_value(i_binary, t_length,
    decimal);
  return compare_strings_together(i_binary, o_binary,
    t_length);
}

/* Inputs: input binary, total length, decimal,
output binary; */
int allocate_binary_values_test(char* i_binary,
  int t_length, int decimal, char* o_binary)
{
  i_binary = allocate_binary_values(i_binary, t_length,
    decimal);
  return compare_strings_together(i_binary, o_binary,
    t_length);
}

// Inputs: decimal, output length;
int calculate_real_binary_length_test(int decimal,
  int o_length)
{
  int length = calculate_real_binary_length(decimal);
  return (length == o_length);
}

// Inputs: decimal, output length;
int calculate_nearest_binary_length_test(int decimal,
  int o_length)
{
  int length=calculate_nearest_binary_length(decimal);
  return (length == o_length);
}

// Inputs: decimal, output binary;
int convert_decimal_binary_test(int decimal,
  char* o_binary)
{
  char* binary = convert_decimal_binary(decimal);
  int length = calculate_string_length(binary);
  return compare_strings_together(binary, o_binary,
    length);
}

// Inputs: character, output binary;
int convert_character_binary_test(char character,
  char* o_binary)
{
  char* binary = convert_character_binary(character);
  int length = calculate_string_length(binary);
  return compare_strings_together(binary, o_binary,
    length);
}

/* Inputs: binary, index, input decimal,
output decimal */
int calculate_decimal_binary_test(char* binary,
  int index, int i_decimal, int o_decimal)
{
  i_decimal=calculate_decimal_binary(binary, index,
    i_decimal);
  return (i_decimal == o_decimal);
}

// Inputs: binary, output decimal;
int convert_binary_decimal_test(char* binary,
  int o_decimal)
{
  int decimal = convert_binary_decimal(binary);
  return (decimal == o_decimal);
}

/* Made by Roy Hampus Fridholm */
