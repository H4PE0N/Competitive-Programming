
#include <stdlib.h>
#include <string.h>

#include "../Competitive-Functions-Program-4/\
competitive-functions-program-4.h"

char* binary_left_shifting(char* binary, int length)
{
  char* binary = generate_empty_string(length);
  for(int index = 1; index < length; index = index + 1)
  {
    binary = add_string_character(binary, index - 1,
      *(binary + index));
  }
  return add_string_character(binary, length-1,
    *(binary + 0));
}

char* binary_right_shifting(char* binary, int length)
{
  char* binary = generate_empty_string(length);
  binary = add_string_character(binary, 0,
    *(binary + length - 1));
  for(int index = 0; index < (length - 1); index += 1)
  {
    binary = add_string_character(binary, index + 1,
      *(binary + index));
  }
  return binary;
}

char* binary_and_opperation(char* first, char* second,
  int length)
{
  char* binary = generate_empty_string(length);
  for(int index = 0; index < length; index = index + 1)
  {
    if(*(first + index)=='1' && *(second + index)=='1')
      binary =add_string_character(binary, index, '1');
    else
      binary =add_string_character(binary, index, '0');
  }
  return binary;
}

char* binary_or_opperation(char* first, char* second,
  int length)
{
  char* binary = generate_empty_string(length);
  for(int index = 0; index < length; index = index + 1)
  {
    if(*(first + index)=='1' || *(second + index)=='1')
      binary =add_string_character(binary, index, '1');
    else
      binary =add_string_character(binary, index, '0');
  }
  return binary;
}

char* binary_xor_opperation(char* first, char* second,
  int length)
{
  char* binary = generate_empty_string(length);
  for(int index = 0; index < length; index = index + 1)
  {
    if(*(first + index) != *(second + index))
      binary =add_string_character(binary, index, '1');
    else
      binary =add_string_character(binary, index, '0');
  }
  return binary;
}

char* binary_not_opperation(char* binary, int length)
{
  char* binary = generate_empty_string(length);
  for(int index = 0; index < length; index = index + 1)
  {
    if(*(binary + index) == '1')
      binary =add_string_character(binary, index, '0');
    else
      binary =add_string_character(binary, index, '1');
  }
  return binary;
}
