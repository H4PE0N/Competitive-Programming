
#include <stdlib.h>
#include <stdbool.h>

#include "../Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../Library-Functions-Folder-8/\
library-functions-program-8.h"

char* remove_string_characters(char* string,int length,
  char character)
{
  while(string_contains_character(string, length,
    character))
  {
    string = remove_string_character(string, length,
      character);
  }
  return string;
}

char generate_random_character(int minimum,int maximum)
{
  return generate_random_integer(minimum, maximum);
}

int character_range_between(char character,int minimum,
  int maximum)
{
  return (character <= maximum && character >=minimum);
}

char* generate_random_string(int length, int minimum,
  int maximum)
{
  char* string = generate_empty_string(length);
  for(int index = 0; index < length; index = index + 1)
  {
    string = allocate_string_character(string, index,
      generate_random_character(minimum, maximum));
  }
  return string;
}
