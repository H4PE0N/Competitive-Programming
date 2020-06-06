
#include <stdlib.h>
#include <string.h>

#include "../Library-Functions-Folder-4/\
library-functions-program-4.h"

char* binary_left_shifting(char* i_binary, int length)
{
  char* binary = generate_character_string(length);
  for(int index = 1; index < length; index = index + 1)
  {
    binary = add_string_character(binary, index - 1,
      string_index_character(i_binary, index));
  }
  return add_string_character(binary, length-1,
    string_index_character(i_binary, 0));
}

char* binary_right_shifting(char* i_binary, int length)
{
  char* binary = generate_character_string(length);
  binary = add_string_character(binary, 0,
    string_index_character(i_binary, length - 1));
  for(int index = 0; index < (length - 1); index += 1)
  {
    binary = add_string_character(binary, index + 1,
      string_index_character(i_binary, index));
  }
  return binary;
}

char* binary_and_operation(char* first, char* second,
  int length)
{
  char* binary = generate_character_string(length);
  for(int index = 0; index < length; index = index + 1)
  {
    if(*(first + index)=='1' && *(second + index)=='1')
      binary =add_string_character(binary, index, '1');
    else
      binary =add_string_character(binary, index, '0');
  }
  return binary;
}

char* binary_or_operation(char* first, char* second,
  int length)
{
  char* binary = generate_character_string(length);
  for(int index = 0; index < length; index = index + 1)
  {
    if(*(first + index)=='1' || *(second + index)=='1')
      binary =add_string_character(binary, index, '1');
    else
      binary =add_string_character(binary, index, '0');
  }
  return binary;
}

char* binary_xor_operation(char* first, char* second,
  int length)
{
  char* binary = generate_character_string(length);
  for(int index = 0; index < length; index = index + 1)
  {
    if(*(first + index) != *(second + index))
      binary =add_string_character(binary, index, '1');
    else
      binary =add_string_character(binary, index, '0');
  }
  return binary;
}

char* binary_not_operation(char* i_binary, int length)
{
  char* binary = generate_character_string(length);
  for(int index = 0; index < length; index = index + 1)
  {
    if(*(i_binary + index) == '1')
      binary =add_string_character(binary, index, '0');
    else
      binary =add_string_character(binary, index, '1');
  }
  return binary;
}
