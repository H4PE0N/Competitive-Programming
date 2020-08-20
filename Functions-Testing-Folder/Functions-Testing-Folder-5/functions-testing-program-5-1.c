
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

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

int binary_integer_enough_test(char* binary,int length,
  int integer, int output)
{
  int boolean = binary_integer_enough(binary, length,
    integer); return (boolean == output);
}

int calculate_bit_integer_test(int integer, int output)
{
  int product = calculate_bit_integer(integer);
  return (product == output);
}

int reduce_binary_integer_test(char* binary,int length,
  int integer, int output)
{
  integer = reduce_binary_integer(binary, length,
    integer); return (integer == output);
}

int convert_binary_integer_test(char* binary,
  int output)
{
  return (convert_binary_integer(binary) == output);
}

int increase_binary_integer_test(char*binary,int index,
  int integer, int output)
{
  integer = increase_binary_integer(binary, index,
    integer); return (integer == output);
}

int allocate_binary_bit_test(char* binary, int length,
  int integer, char* output)
{
  binary = allocate_binary_bit(binary,length,integer);
  return compare_character_strings(binary, output,
    length);
}

int nearest_binary_length_test(int integer,int output)
{
  return (nearest_binary_length(integer) == output);
}

int convert_integer_binary_test(int integer,
  char* output)
{
  char* binary = convert_integer_binary(integer);
  return compare_character_strings(binary, output,
    character_string_length(binary));
}

int actual_binary_length_test(int integer, int output)
{
  return (actual_binary_length(integer) == output);
}

int convert_character_binary_test(char character,
  char* output)
{
  char* binary = convert_character_binary(character);
  int length = character_string_length(binary);
  return compare_character_strings(binary, output,
    length);
}

int allocate_binary_bits_test(char* binary, int length,
  int integer, char* output)
{
  binary = allocate_binary_bits(binary,length,integer);
  return compare_character_strings(binary, output,
    length);
}
