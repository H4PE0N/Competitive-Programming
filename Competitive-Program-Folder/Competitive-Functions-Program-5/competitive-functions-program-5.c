
#include <stdlib.h>
#include <math.h>

#include "../Competitive-Functions-Program-4/\
competitive-functions-program-4.h"

int binary_decimal_enough(char* binary, int i_length,
  int decimal)
{
  int length = calculate_string_length(binary);
  int product = pow(2, (i_length - 1 - length));
  return  ( (decimal - product) >= 0);
}

int reduce_binary_decimal(char* binary, int length,
  int decimal)
{
  int index = length-calculate_string_length(binary);
  if(binary_decimal_enough(binary,length+1,decimal))
  { return decimal - pow(2, index); } return decimal;
}

char* allocate_binary_bit(char* binary, int i_length,
  int decimal)
{
  int length = calculate_string_length(binary);
  if(binary_decimal_enough(binary,i_length,decimal))
  {
    return add_string_character(binary, length, '1');
  }
  return add_string_character(binary, length, '0');
}

char* allocate_binary_bits(char* binary, int length,
  int decimal)
{
  for(int index = 0; index < length; index++)
  {
    binary = allocate_binary_bit(binary, length,
      decimal); decimal =
   reduce_binary_decimal(binary, length, decimal);
  }
  return binary;
}

int calculate_real_length(int decimal)
{
  int length = 0; while(decimal > pow(2, length))
  { length = (length + 1); } return length;
}

int calculate_nearest_length(int decimal)
{
  int length = calculate_real_length(decimal);
  int index = 2; while(length > pow(2, index))
  { index = (index + 1); } return pow(2, index);
}

char* convert_decimal_binary(int decimal)
{
  int length = calculate_nearest_length(decimal);
  char* binary = generate_empty_string(length);
  return allocate_binary_bits(binary,length,decimal);
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
    return decimal + pow(2, (length - (index + 1)));
  }
  return decimal;
}

int convert_binary_decimal(char* binary)
{
  int length = calculate_string_length(binary),
  decimal = 0;
  for(int index = 0; index < length; index++)
  {
    decimal = calculate_decimal_binary(binary,index,
      decimal);
  }
  return decimal;
}
