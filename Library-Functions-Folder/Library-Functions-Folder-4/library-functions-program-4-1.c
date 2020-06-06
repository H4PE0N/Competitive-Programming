
#include <stdlib.h>
#include <stdbool.h>

#include "../Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../Library-Functions-Folder-8/\
library-functions-program-8.h"

char* allocate_string_character(char* string, int index,
  char character)
{
  *(string + index) = character; return string;
}

char* allocate_string_characters(char* string,
  int length)
{
  for(int index = 0; index < length; index = index + 1)
  {
    string = allocate_string_character(string, index,
      '\0');
  }
  return string;
}

char* generate_character_string(int length)
{
  char* string = malloc(sizeof(string) * (length + 1));
  return allocate_string_characters(string,length + 1);
}

int calculate_string_length(char* string)
{
  int length = 0;
  while(string_index_character(string, length) != '\0')
  { length = length + 1; } return length;
}

int string_contains_character(char* string, int length,
  char character)
{
  for(int index = 0; index < length; index = index + 1)
  {
    if(string_index_character(string,index)==character)
      return true;
  }
  return false;
}

char* switch_string_characters(char* string, int first,
  int second)
{
  char switch_character =string_index_character(string,
    first);
  *(string + first) = string_index_character(string,
    second);
  *(string + second) = switch_character; return string;
}

char* move_string_characters(char* string, int length,
  int start)
{
  for(int index = start; index < length; index += 1)
  {
    string = switch_adjacent_characters(string, index);
  }
  return string;
}

char* remove_string_character(char* string, int length,
  char character)
{
  int start = length;
  for(int index = (length - 1); index >= 0; index -= 1)
  {
    if(string_index_character(string,index)!=character) 
      continue;
    start = index; break;
  }
  string = move_string_characters(string,length,start);
  return allocate_string_character(string,length,'\0');
}

char* add_string_character(char* string, int length,
  char character)
{
  string = allocate_string_character(string, length,
    character);
  return allocate_string_character(string, length + 1,
    '\0');
}

int compare_strings_together(char* first, char* second,
  int length)
{
  for(int index = 0; index < length; index = index + 1)
  {
    char f_character = string_index_character(first,
      index);
    char s_character = string_index_character(second,
      index);
    if(f_character != s_character) return false;
  }
  return true;
}
