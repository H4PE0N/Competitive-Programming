
#include <stdlib.h>
#include <math.h>

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-5/\
library-functions-program-5.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

int binary_integer_enough(char* binary, int total,
  int integer)
{
  int length = character_string_length(binary);
  int product = calculate_bit_integer(total -1-length);
  return  ( (integer - product) >= 0);
}

int calculate_bit_integer(int power_integer)
{
  return integer_power_operation(2, power_integer);
}

int reduce_binary_integer(char* binary, int length,
  int integer)
{
  int index = length - character_string_length(binary);
  if(binary_integer_enough(binary, length + 1,integer))
  {
    return integer - calculate_bit_integer(index);
  }
  else return integer;
}

int actual_binary_length(int integer)
{
  int length = 0;
  while(integer > calculate_bit_integer(length))
  {
    length = increase_integer_variable(length);
  }
  return length;
}

char* allocate_binary_bit(char* binary, int total,
  int integer)
{
  int length = character_string_length(binary);
  if(binary_integer_enough(binary, total, integer))
  {
    return add_string_character(binary, length, '1');
  }
  return add_string_character(binary, length, '0');
}

char* convert_integer_binary(int integer)
{
  int length = nearest_binary_length(integer);
  char* binary = generate_character_string(length);
  return allocate_binary_bits(binary, length, integer);
}

char* convert_character_binary(char character)
{
  char* binary = convert_integer_binary(character);
  return binary;
}

int nearest_binary_length(int integer)
{
  int length=actual_binary_length(integer), index = 2;
  while(length > calculate_bit_integer(index))
  {
    index = increase_integer_variable(index);
  }
  return calculate_bit_integer(index);
}

char* allocate_binary_bits(char* binary, int length,
  int integer)
{
  for(int index = 0; index < length; index = index + 1)
  {
    binary = allocate_binary_bit(binary, length,
      integer);
    integer = reduce_binary_integer(binary, length,
      integer);
  }
  return binary;
}
