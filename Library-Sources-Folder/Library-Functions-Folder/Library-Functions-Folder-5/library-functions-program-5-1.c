
#include "../library-functions-headers.h"

int binary_integer_enough(char* binary, int length,
  int integer)
{
  int index = character_string_length(binary);
  int value=integer_power_operation(2, length-index-1);
  int difference = (integer - value);
  return !integer_variable_smaller(difference, 0);
}

int reduce_binary_integer(char* binary, int length,
  int integer)
{
  int index = length - character_string_length(binary);
  if(binary_integer_enough(binary, length + 1,integer))
  {
    return integer - integer_power_operation(2, index);
  }
  return integer;
}

char* allocate_binary_bit(char* binary, int length,
  int integer)
{
  int index = character_string_length(binary);
  if(binary_integer_enough(binary, length, integer))
  {
    return append_string_character(binary,index,'1');
  }
  return append_string_character(binary, index, '0');
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
  while(integer > integer_power_operation(2, length))
  {
    length = increase_integer_variable(length, 1);
  }
  return length;
}

char* convert_character_binary(char character)
{
  char* binary = convert_integer_binary(character);
  return binary;
}

int* convert_binary_array(char** binary, int length)
{
  int* array = generate_integer_array(length);
  for(int index = 0; index < length; index = index + 1)
  {
    char* current=sentence_index_string(binary, index);
    int integer = convert_binary_integer(current);
    array = append_array_integer(array, index,integer);
  }
  return array;
}

int nearest_binary_length(int integer)
{
  int length =actual_binary_length(integer), index = 2;
  while(length > integer_power_operation(2, index))
  {
    index = increase_integer_variable(index, 1);
  }
  return integer_power_operation(2, index);
}

char** convert_array_binary(int* array, int length)
{
  char** binary = generate_string_sentence(length, 8);
  for(int index = 0; index < length; index = index + 1)
  {
    int integer = array_index_integer(array, index);
    char* current = convert_integer_binary(integer);
    binary = append_sentence_string(binary, index,
      current);
  }
  return binary;
}
