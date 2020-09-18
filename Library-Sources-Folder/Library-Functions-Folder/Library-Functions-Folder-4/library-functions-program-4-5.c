
#include <stdlib.h>
#include <stdbool.h>

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

char lower_alphabet_character(int index)
{
  return (index >= 1 && index <= 26 ? 96 + index:'\0');
}

char* add_string_characters(char* string, int length,
  char character, int amount)
{
  for(int index = 0; index < amount; index = index + 1)
  {
    string = add_string_character(string, length+index,
      character);
  }
  return string;
}

int character_variable_greater(char first, char second)
{
  int boolean = (first > second); return boolean;
}
