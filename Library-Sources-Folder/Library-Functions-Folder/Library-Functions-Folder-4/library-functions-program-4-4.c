
#include "../library-functions-headers.h"

int string_character_index(char* string, int length,
  char character)
{
  for(int index = (length - 1); index >= 0; index -= 1)
  {
    char current=string_index_character(string, index);
    if(compare_character_variables(character, current))
      return index;
  }
  return length;
}

int characters_inside_string(char* string, int length,
  char* characters)
{
  int char_len = character_string_length(characters);
  if(integer_variable_greater(char_len, length) ||
    char_len <= 0) return false;
  for(int index = 0; index <= length-char_len; index++)
  {
    char*section=character_string_section(string,index,
      length);
    if(compare_character_strings(section, characters,
      char_len)) return true;
  }
  return false;
}

int compare_string_characters(char* string, int first,
  int second)
{
  char f_character=string_index_character(string, first);
  char s_character=string_index_character(string,second);
  return compare_character_variables(f_character,
    s_character);
}

char* increase_string_memory(char* string, int length,
  int increase)
{
  char* increased = generate_character_string(length +
    increase);
  for(int index = 0; index < length; index = index + 1)
  {
    char character = string_index_character(string,
      index);
    increased=append_string_character(increased, index,
      character);
  }
  return increased;
}

int compare_strings_character(char* first,char* second,
  int index)
{
  char f_character=string_index_character(first,index);
  char s_character = string_index_character(second,
    index);
  return compare_character_variables(f_character,
    s_character);
}

int string_character_smaller(char* string, int first,
  int second)
{
  char f_character = string_index_character(string,
    first);
  char s_character = string_index_character(string,
    second);
  return character_variable_smaller(f_character,
    s_character);
}

char*combine_character_strings(char*first,int f_length,
  char* second, int s_length)
{
  char* combined=increase_string_memory(first,f_length,
    s_length);
  for(int index = 0; index < s_length; index = index+1)
  {
    char character = string_index_character(second,
      index); int current = (index + f_length);
    combined=append_string_character(combined, current,
      character);
  }
  return combined;
}

char* insert_string_characters(char* string, int first,
  int second, char character)
{
  for(int index=first; index <= second;index=index + 1)
  {
    string = allocate_string_character(string, index,
      character);
  }
  return string;
}
