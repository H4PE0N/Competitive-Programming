
/*  This program contains functions that deals with
strings, character arrays. */

#include <stdlib.h>
#include <stdbool.h>

char* allocate_string_value(char* str, int ind, char cha)
{
  *(str + ind) = cha; return str;
}

char* allocate_string_values(char* string, int length)
{
  for(int index = 0; index < length; index++)
  {
    string = allocate_string_value(string, index, '\0');
  }
  return string;
}

char* generate_empty_string(const int length)
{
  char* string = malloc(sizeof(string) * length);
  return allocate_string_values(string, length);
}

/* Made by Roy Hampus Fridholm */
