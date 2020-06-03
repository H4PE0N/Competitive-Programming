
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

int shuffle_character_string_test(char* i_string,
  int length, char* o_string)
{
  i_string = shuffle_character_string(i_string,
    length);
  return compare_string_content(i_string, o_string,
    length);
}

int duplicate_character_string_test(char* i_string,
  int length)
{
  char* string = duplicate_character_string(i_string,
    length);
  return compare_strings_together(i_string, string,
    length);
}

// int switch_adjacent_characters_test()

int sort_character_string_test(char* i_string,
  int iteration, char* o_string)
{
  i_string=sort_character_string(i_string,iteration);
  int length = calculate_string_length(i_string);
  return compare_strings_together(i_string, o_string,
    length);
}

int sort_string_iteration_test(char* i_string,
  int length, char* o_string)
{
  i_string = sort_string_iteration(i_stirng, length);
  return compare_strings_together(i_string, o_string,
    length);
}

int compare_string_content_test(char* first,
  char* second, int length, int boolean)
{
  int output = compare_string_content(first, second,
    length);
  return (output == boolean);
}
