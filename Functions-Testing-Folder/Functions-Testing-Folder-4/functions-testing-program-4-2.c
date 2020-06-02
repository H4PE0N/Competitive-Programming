
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

int compare_strings_together_test(char* first,
  char* second, int length, int boolean)
{
  int output = compare_strings_together(first,second,
    length);
  return (output == boolean);
}

int generate_random_character_test(int i_minimum,
  int i_maximum, int o_minimum, int o_maximum)
{
  char character = generate_random_character(
    i_minimum, i_maximum);
  return character_range_between(character,o_minimum,
    o_maximum);
}

int character_range_between_test(char character,
  int minimum, int maximum, int boolean)
{
  int output = character_range_between(character,
    minimum, maximum);
  return (output == boolean);
}
