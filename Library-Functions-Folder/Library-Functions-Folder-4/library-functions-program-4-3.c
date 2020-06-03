
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#include "../Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../Library-Functions-Folder-8/\
library-functions-program-8.h"

char* sort_character_string(char* string, int length)
{
  for(int index = length; index >= 0; index = index-1)
  {
    string = sort_string_iteration(string, index);
  }
  return string;
}

int compare_string_content(char* first, char* second,
  int length)
{
  first = sort_character_string(first, length);
  return compare_strings_together(first,
    sort_character_string(second, length), length);
}
