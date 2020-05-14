
#include <stdlib.h>
#include <stdbool.h>

// Inputs: string, index, character;
char* allocate_string_character(char* string, int index,
  char character)
{
  *(string + index) = character; return string;
}

// Inputs: string, total length;
char* allocate_string_characters(char* string,
  int t_length)
{
  for(int index = 0; index < t_length; index++)
  {
    string=allocate_string_character(string,index,'\0');
  }
  return string;
}

// Inputs: total length;
char* generate_empty_string(const int t_length)
{
  char* string = malloc(sizeof(string) * (t_length+1));
  return allocate_string_characters(string,t_length + 1);
}

// Inputs: string;
int calculate_string_length(const char* string)
{
  int length = 0; while(*(string + length) != '\0')
  { length += 1; } return length;
}

// Inputs: string, total length, character;
int string_contains_character(char* string,int t_length,
  char character)
{
  for(int index = 0; index < t_length; index++)
  {
    if(*(string + index) == character) return true;
  }
  return false;
}

// Inputs: string, index;
char* switch_string_characters(char* string, int index)
{
  char switch_character = *(string + index);
  *(string + index) = *(string + (index + 1) );
  *(string + (index + 1) ) = switch_character;
  return string;
}

// Inputs: string, current length, start;
char* move_string_characters(char* string, int c_length,
  int start)
{
  for(int index = start; index < c_length; index++)
  {
    string = switch_string_characters(string, index);
  }
  return string;
}

// Inputs: string, current length, character;
char* remove_string_character(char* string,int c_length,
  char character)
{
  int start = c_length;
  for(int index = (c_length - 1); index >= 0; index--)
  {
    if(*(string + index) == character)
    { start = index; break; }
  }
  string=move_string_characters(string,c_length,start);
  return allocate_string_character(string,c_length,'\0');
}

// Inputs: string, current length, character;
char* add_string_character(char* string, int c_length,
  char character)
{
  string = allocate_string_character(string, c_length,
    character);
  return allocate_string_character(string, c_length + 1,
    '\0');
}

// Inputs: first string, second string, total length;
int compare_strings_together(char* first,char* second,
  int t_length)
{
  for(int index = 0; index < t_length; index++)
  {
    if(*(first + index) != *(second + index))
    { return false; }
  }
  return true;
}

// Inputs: string, current length, character;
char* remove_string_characters(char* string,int c_length,
  char character)
{
  while(string_contains_character(string, c_length,
    character))
  {
    string = remove_string_character(string, c_length,
      character);
  }
  return string;
}
