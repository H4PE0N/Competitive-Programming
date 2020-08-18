
#include <stdlib.h>
#include <math.h>

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-2/\
library-functions-program-2.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-5/\
library-functions-program-5.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-9/\
library-functions-program-9.h"

int binary_integer_enough(char* binary, int length,
  int integer)
{
  int index = character_string_length(binary);
  int binary_index = (length - index - 1);
  int difference = (integer - calculate_bit_integer(
    binary_index));
  return !integer_smaller_than(difference, 0);
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
  return integer;
}

char* allocate_binary_bit(char* binary, int length,
  int integer)
{
  int index = character_string_length(binary);
  if(binary_integer_enough(binary, length, integer))
  {
    return add_string_character(binary, index, '1');
  }
  return add_string_character(binary, index, '0');
}

char* convert_integer_binary(int integer)
{
  int length = nearest_binary_length(integer);
  char* binary = generate_character_string(length);
  return allocate_binary_bits(binary, length, integer);
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
