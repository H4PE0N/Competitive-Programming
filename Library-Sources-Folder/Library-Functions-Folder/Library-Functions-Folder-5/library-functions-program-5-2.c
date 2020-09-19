
#include "../library-functions-headers.h"

int binary_range_between(char* binary, int minimum,
  int maximum)
{
  int integer = convert_binary_integer(binary);
  int output = integer_range_between(integer, minimum,
    maximum); return output;
}

int convert_binary_integer(char* binary)
{
  int length = character_string_length(binary),
    integer = 0;
  for(int index = 0; index < length; index = index + 1)
  {
    integer = increase_binary_integer(binary, index,
      integer);
  }
  return integer;
}

char convert_binary_character(char* binary)
{
  char character = convert_binary_integer(binary);
  return character;
}

int increase_binary_integer(char* binary, int index,
  int integer)
{
  int length = character_string_length(binary);
  if(string_index_character(binary, index) == '0')
    return integer;
  int binary_index = (length - index - 1);
  return integer + calculate_bit_integer(binary_index);
}

char* generate_random_binary(int minimum, int maximum)
{
  int integer = generate_random_integer(minimum,
    maximum);
  char* binary = convert_integer_binary(integer);
  return binary;
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

char** convert_string_binary(char* string, int length)
{
  char** binary = generate_string_sentence(length, 8);
  for(int index = 0; index < length; index = index + 1)
  {
    char character = string_index_character(string,
      index);
    char* current =convert_character_binary(character);
    binary=add_sentence_string(binary, index, current);
  }
  return binary;
}
