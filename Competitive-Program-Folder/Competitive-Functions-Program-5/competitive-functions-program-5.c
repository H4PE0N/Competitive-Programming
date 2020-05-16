
#include <stdlib.h>
#include <math.h>

#include "../Competitive-Functions-Program-4/\
competitive-functions-program-4.h"

int binary_integer_enough(char* binary, int i_length,
  int integer)
{
  int length = calculate_string_length(binary);
  int product = pow(2, (i_length - 1 - length));
  return  ( (integer - product) >= 0);
}

int reduce_binary_integer(char* binary, int length,
  int integer)
{
  int index = length-calculate_string_length(binary);
  if(binary_integer_enough(binary,length+1,integer))
  { return integer - pow(2, index); } return integer;
}

char* allocate_binary_bit(char* binary, int i_length,
  int integer)
{
  int length = calculate_string_length(binary);
  if(binary_integer_enough(binary,i_length,integer))
  {
    return add_string_character(binary, length, '1');
  }
  return add_string_character(binary, length, '0');
}

char* allocate_binary_bits(char* binary, int length,
  int integer)
{
  for(int index = 0; index < length; index++)
  {
    binary = allocate_binary_bit(binary, length,
      integer); integer =
   reduce_binary_integer(binary, length, integer);
  }
  return binary;
}

int calculate_real_length(int integer)
{
  int length = 0; while(integer > pow(2, length))
  { length = (length + 1); } return length;
}

int calculate_nearest_length(int integer)
{
  int length = calculate_real_length(integer);
  int index = 2; while(length > pow(2, index))
  { index = (index + 1); } return pow(2, index);
}

char* convert_integer_binary(int integer)
{
  int length = calculate_nearest_length(integer);
  char* binary = generate_empty_string(length);
  return allocate_binary_bits(binary,length,integer);
}

char* convert_character_binary(char character)
{
  return convert_integer_binary(character);
}

int calculate_integer_binary(char* binary, int index,
  int integer)
{
  int length = calculate_string_length(binary);
  if(*(binary + index) == '1')
  {
    return integer + pow(2, (length - (index + 1)));
  }
  return integer;
}

int convert_binary_integer(char* binary)
{
  int length = calculate_string_length(binary),
  integer = 0;
  for(int index = 0; index < length; index++)
  {
    integer = calculate_integer_binary(binary,index,
      integer);
  }
  return integer;
}

char convert_binary_character(char* binary)
{
  return convert_binary_integer(binary);
}
