
/*  This program contains functions that deals with */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#include "../Competitive-Functions-Program-4/\
competitive-functions-program-4.h"

int reduce_binary_decimal(char* binary, int length,
  int decimal)
{
  int weight = length - calculate_string_length(binary);
  if(decimal - pow(2, weight) >= 0)
  { decimal = decimal - pow(2, weight); } return decimal;
}

char* allocate_binary_value(char* binary, int length,
  int decimal)
{
  int index = calculate_string_length(binary),
  weight = (length - 1) - index;
  if(decimal - pow(2, weight) >= 0)
  { binary = add_string_character(binary, index, '1'); }
  else { *(binary + index) = '0'; } return binary;
}

char* allocate_binary_values(char* binary, int length,
  int decimal)
{
  for(int index = 0; index < length; index++)
  {
    binary = allocate_binary_value(binary,length,decimal);
    decimal = reduce_binary_decimal(binary, length,
      decimal);
  }
  return binary;
}

int calculate_binary_length(const int decimal)
{
  int length = 0; while(decimal > pow(2, length))
  { length = (length + 1); } return length;
}

char* convert_decimal_binary(const int decimal)
{
  int length = calculate_binary_length(decimal);
  char* binary = generate_empty_string(length);
  return allocate_binary_values(binary, length, decimal);
}

char* convert_character_binary(char character)
{
  return convert_decimal_binary(character);
}

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

int convert_binary_decimal(char* binary)
{
  int length = calculate_string_length(binary),decimal=0;
  for(int index = 0; index < length; index++)
  {
    decimal = calculate_decimal_binary(binary, index,
      decimal);
  }
  return decimal;
}

/* Made by Roy Hampus Fridholm */
