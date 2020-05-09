
/*  This program contains functions that deals with
binary strings and conversions between decimal and
characters. */

#include <stdlib.h>
#include <math.h>

#include "../Competitive-Functions-Program-4/\
competitive-functions-program-4.h"

// Inputs: binary, total length, decimal;
int reduce_binary_decimal(char* binary, int t_length,
  int decimal)
{
  int weight = t_length - calculate_string_length(binary);
  if(decimal - pow(2, weight) >= 0) decimal -= pow(2,weight);
  return decimal;
}

// Inputs: binary, total length, decimal;
char* allocate_binary_value(char* binary, int t_length,
  int decimal)
{
  int index = calculate_string_length(binary), weight =
  (t_length - 1) - index;
  if(decimal - pow(2, weight) >= 0)
  { binary = add_string_character(binary, index, '1'); }
  else add_string_character(binary, index, '0');
  return binary;
}

// Inputs: binary, total length, decimal;
char* allocate_binary_values(char* binary, int t_length,
  int decimal)
{
  for(int index = 0; index < t_length; index++)
  {
    binary = allocate_binary_value(binary, t_length,
      decimal);
    decimal = reduce_binary_decimal(binary, t_length,
      decimal);
  }
  return binary;
}

// Inputs: decimal;
int calculate_real_binary_length(const int decimal)
{
  int length = 0; while(decimal > pow(2, length))
  { length = (length + 1); } return length;
}

// Inputs: decimal;
int calculate_nearest_binary_length(const int decimal)
{
  int chars = 0, length = 2;
  while(decimal >= pow(2, chars)) chars = (chars + 1);
  while(chars > pow(2, length))
  { length = (length + 1); } return pow(2, length);
}

// Inputs: decimal;
char* convert_decimal_binary(const int decimal)
{
  int length = calculate_nearest_binary_length(decimal);
  char* binary = generate_empty_string(length);
  return allocate_binary_values(binary, length, decimal);
}

// Inputs: character;
char* convert_character_binary(char character)
{
  return convert_decimal_binary(character);
}

// Inputs: binary, index, decimal;
int calculate_decimal_binary(char* binary, int index,
  int decimal)
{
  int length = calculate_string_length(binary);
  if(*(binary + index) == '1')
  {
    return decimal + pow(2, (length - (index + 1) ));
  }
  return decimal;
}

// Inputs: binary;
int convert_binary_decimal(char* binary)
{
  int length=calculate_string_length(binary),decimal=0;
  for(int index = 0; index < length; index++)
  {
    decimal = calculate_decimal_binary(binary, index,
      decimal);
  }
  return decimal;
}

/* Made by Roy Hampus Fridholm */
