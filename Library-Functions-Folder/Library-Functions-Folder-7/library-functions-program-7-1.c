
#include <stdlib.h>
#include <string.h>

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-7/\
library-functions-program-7.h"

char* binary_and_operation(char* first, char* second,
  int length)
{
  char* binary = generate_character_string(length);
  for(int index = 0; index < length; index = index + 1)
  {
    if(*(first + index)=='1' && *(second + index)=='1')
      binary = add_string_character(binary, index,'1');
    else
      binary = add_string_character(binary, index,'0');
  }
  return binary;
}

char* binary_left_shifting(char* binary, int length)
{
  char* shifted = generate_character_string(length);
  for(int index = 1; index < length; index = index + 1)
  {
    shifted = add_string_character(shifted, index - 1,
      string_index_character(binary, index));
  }
  return add_string_character(shifted, length - 1,
    string_index_character(binary, 0));
}

char* binary_or_operation(char* first, char* second,
  int length)
{
  char* binary = generate_character_string(length);
  for(int index = 0; index < length; index = index + 1)
  {
    if(*(first + index)=='1' || *(second + index)=='1')
      binary = add_string_character(binary, index,'1');
    else
      binary = add_string_character(binary, index,'0');
  }
  return binary;
}

char* binary_right_shifting(char* binary, int length)
{
  char* shifted = generate_character_string(length);
  shifted = add_string_character(shifted, 0,
    string_index_character(binary, length - 1));
  for(int index = 0; index < (length - 1); index += 1)
  {
    shifted = add_string_character(shifted, index + 1,
      string_index_character(binary, index));
  }
  return shifted;
}

char* binary_xor_operation(char* first, char* second,
  int length)
{
  char* binary = generate_character_string(length);
  for(int index = 0; index < length; index = index + 1)
  {
    if(compare_strings_character(first, second, index))
      binary = add_string_character(binary, index,'0');
    else
      binary = add_string_character(binary, index,'1');
  }
  return binary;
}

char* binary_not_operation(char* binary, int length)
{
  char* opposite = generate_character_string(length);
  for(int index = 0; index < length; index = index + 1)
  {
    if(string_index_character(binary, index) == '1')
     opposite=add_string_character(opposite,index,'0');
    else
     opposite=add_string_character(opposite,index,'1');
  }
  return opposite;
}
