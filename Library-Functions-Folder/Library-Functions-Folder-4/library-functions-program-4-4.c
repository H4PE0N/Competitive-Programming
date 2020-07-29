
#include <stdlib.h>
#include <stdbool.h>

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

int compare_strings_character(char* first,char* second,
  int index)
{
  char character = string_index_character(first,index);
  return (character == string_index_character(second,
    index));
}

int string_character_smaller(char* string, int first,
  int second)
{
  char character=string_index_character(string, first);
  return character < string_index_character(string,
    second);
}

int string_character_greater(char* string, int first,
  int second)
{
  char character=string_index_character(string, first);
  return character > string_index_character(string,
    second);
}

char* reverse_character_string(char* string,int length)
{
  char* reverse = generate_character_string(length);
  for(int index = 0; index < length; index = index + 1)
  {
    *(reverse + index) = string_index_character(string,
      length - (index + 1));
  }
  return reverse;
}

int string_character_index(char* string, int length,
  char character)
{
  int character_index = length;
  for(int index = (length - 1); index >= 0; index -= 1)
  {
    if(string_index_character(string,index)==character)
      { character_index = index; break; }
  }
  return character_index;
}

int characters_inside_string(char* string, int length,
  char* characters)
{
  int char_len = character_string_length(characters);
  if(integer_greater_than(char_len, length) || char_len
    <= 0) return false;
  for(int index = 0; index <= length-char_len; index++)
  {
    char*section=character_string_section(string,index,
      length);
    character_string_stdout(section, length);
    if(compare_character_strings(section, characters,
      char_len)) return true;
  }
  return false;
}

char* character_string_section(char* string, int first,
  int second)
{
  char* section = generate_character_string(second -
    first + 1);
  for(int index = first; index <= second; index += 1)
  {
    int length = character_string_length(section);
    int character=string_index_character(string,index);
    section = add_string_character(section, length,
      character);
  }
  return section;
}
