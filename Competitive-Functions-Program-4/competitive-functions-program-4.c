
/*  This program contains functions that deals with
strings, character arrays. */

#include <stdlib.h>
#include <stdbool.h>

char* allocate_string_value(char* string, int index,
  char character)
{
  *(string + index) = character; return string;
}

// Function takes in total length of string;
char* allocate_string_values(char* string, int t_length)
{
  for(int index = 0; index < t_length; index++)
  {
    string = allocate_string_value(string, index, '\0');
  }
  return string;
}

// Function takes in total length of string;
char* generate_empty_string(const int t_length)
{
  char* string = malloc(sizeof(string) * t_length);
  return allocate_string_values(string, t_length);
}

int calculate_string_length(const char* string)
{
  int length = 0; while(*(string + length) != '\0')
  { length += 1; } return length;
}

// Function takes in current length of string;
int string_contains_character(char* string, int c_length,
  char character)
{
  for(int index = 0; index < c_length; index++)
  {
    if(*(string + index) == character) { return true; }
  }
  return false;
}

char* switch_string_characters(char* string, int index)
{
  char switch_value = *(string + index);
  *(string + index) = *(string + (index + 1) );
  *(string + (index + 1) ) = switch_value;
  return string;
}

// Function takes in current length of string;
char* move_string_characters(char* string, int c_length,
  int start)
{
  for(int index = start; index < c_length; index++)
  {
    string = switch_string_characters(string, index);
  }
  return string;
}

// Function takes in current length of string;
char* remove_string_character(char* string, int c_length,
  char character)
{
  int start = c_length;
  for(int index = (c_length - 1); index >= 0; index--)
  {
    if(*(string + index) == character)
    { start = index; break; }
  }
  string = move_string_characters(string, c_length,
    start);
  return allocate_string_value(string,c_length,'\0');
}

// Function takes in current length of string;
char* add_string_character(char* string, int c_length,
  char character)
{
  string = allocate_string_value(string, c_length,
    character);
  return allocate_string_value(string,c_length+1,'\0');
}

/* Made by Roy Hampus Fridholm */
