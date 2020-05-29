
#include <stdlib.h>
#include <stdbool.h>

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
    string=allocate_string_character(string,index,'\0');
  }
  return string;
}

char* generate_empty_string(int length)
{
  char* string = malloc(sizeof(string) * (length + 1));
  return allocate_string_characters(string,length + 1);
}

int calculate_string_length(char* string)
{
  int length = 0; while(*(string + length) != '\0')
    { length = length + 1; } return length;
}

int string_contains_character(char* string, int length,
  char character)
{
  for(int index = 0; index < length; index = index + 1)
  {
    if(*(string + index) == character) return true;
  }
  return false;
}

char* switch_string_characters(char* string, int index)
{
  char switch_character = *(string + index);
  *(string + index) = *(string + (index + 1));
  *(string + (index + 1)) = switch_character;
  return string;
}

char* move_string_characters(char* string, int length,
  int start)
{
  for(int index = start; index < length; index += 1)
  {
    string = switch_string_characters(string, index);
  }
  return string;
}

char* remove_string_character(char* string, int length,
  char character)
{
  int start = length;
  for(int index = (length - 1); index >= 0; index -= 1)
  {
    if(*(string + index) != character) continue;
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

int compare_strings_together(char* first,char* second,
  int length)
{
  for(int index = 0; index < length; index = index + 1)
  {
    if(*(first + index) != *(second + index))
      { return false; }
  }
  return true;
}
