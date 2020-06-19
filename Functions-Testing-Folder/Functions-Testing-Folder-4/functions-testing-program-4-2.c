
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

int compare_character_strings_test(char* first,
  char* second, int length, int boolean)
{
  int output = compare_character_strings(first, second,
    length); return (output == boolean);
}

int character_range_between_test(char character,
  int minimum, int maximum, int boolean)
{
  int output = character_range_between(character,
    minimum, maximum); return (output == boolean);
}

int shuffle_character_string_test(char* string,
  int length, char* output)
{
  string = shuffle_character_string(string, length);
  return compare_string_content(string, output,length);
}

int duplicate_character_string_test(char* string,
  int length, char* output)
{
  string = duplicate_character_string(string, length);
  return compare_character_strings(string, output,
    length);
}

int switch_adjacent_characters_test(char* string,
  int index, char* output)
{
  string = switch_adjacent_characters(string, index);
  int length = character_string_length(string);
  return compare_character_strings(string, output,
    length);
}

int sort_character_string_test(char* string,
  int iteration, char* output)
{
  string = sort_character_string(string, iteration);
  int length = character_string_length(string);
  return compare_character_strings(string, output,
    length);
}

int sort_string_iteration_test(char* string,int length,
  char* output)
{
  string = sort_string_iteration(string, length);
  return compare_character_strings(string, output,
    length);
}

int compare_string_content_test(char* first,
  char* second, int length, int output)
{
  int boolean = compare_string_content(first, second,
    length); return (boolean == output);
}

int string_index_character_test(char* string,int index,
  char output)
{
  char character=string_index_character(string, index);
  return (character == output);
}
