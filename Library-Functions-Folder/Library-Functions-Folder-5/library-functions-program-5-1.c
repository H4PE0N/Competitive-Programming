
#include <stdlib.h>
#include <math.h>

#include "../Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../Library-Functions-Folder-5/\
library-functions-program-5.h"

#include "../Library-Functions-Folder-8/\
library-functions-program-8.h"

int calculate_bit_integer(int power_integer)
{
  return integer_power_operation(2, power_integer);
}

int binary_integer_enough(char* binary, int i_length,
  int integer)
{
  int length = calculate_string_length(binary),
    power_integer = (i_length - 1 - length);
  int product = calculate_bit_integer(power_integer);
  return  ( (integer - product) >= 0);
}

int reduce_binary_integer(char* binary, int length,
  int integer)
{
  int index = length-calculate_string_length(binary);
  if(binary_integer_enough(binary,length+1,integer))
    return integer - calculate_bit_integer(index);
  else return integer;
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
  for(int index = 0; index < length; index += 1)
  {
    binary = allocate_binary_bit(binary, length,
      integer);
    integer = reduce_binary_integer(binary, length,
      integer);
  }
  return binary;
}

int calculate_real_length(int integer)
{
  int length = 0;
  while(integer > calculate_bit_integer(length))
    { length = (length + 1); } return length;
}

int calculate_nearest_length(int integer)
{
  int length = calculate_real_length(integer),
    index = 2;
  while(length > calculate_bit_integer(index))
  { index ++; } return calculate_bit_integer(index);
}

char* convert_integer_binary(int integer)
{
  int length = calculate_nearest_length(integer);
  char* binary = generate_character_string(length);
  return allocate_binary_bits(binary,length,integer);
}

char* convert_character_binary(char character)
{
  char* binary = convert_integer_binary(character);
  return binary;
}

int calculate_integer_binary(char* binary, int index,
  int integer)
{
  int length = calculate_string_length(binary);
  if(*(binary + index) == '1') return integer +
    calculate_bit_integer(length - (index + 1));
  else return integer;
}
