
#include "../../Library-Functions-Folder/\
library-functions-headers.h"

int compare_character_strings_test(char* first,
  char* second, int length, int output)
{
  int boolean = compare_character_strings(first,second,
    length);
  return compare_integer_variables(boolean, output);
}

int character_range_between_test(char character,
  int minimum, int maximum, int output)
{
  int boolean = character_range_between(character,
    minimum, maximum);
  return compare_integer_variables(boolean, output);
}

int shuffle_character_string_test(char* string,
  int length, char* output)
{
  string = shuffle_character_string(string, length);
  int same = compare_character_strings(string, output,
    length);
  int content = compare_string_content(string, output,
    length); return (!same && content);
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
    length);
  return compare_integer_variables(boolean, output);
}

int string_index_character_test(char* string,int index,
  char output)
{
  char character=string_index_character(string, index);
  return compare_character_variables(character,output);
}

int character_variable_smaller_test(char first,
  char second, int output)
{
  int boolean = character_variable_smaller(first,
    second);
  return compare_integer_variables(boolean, output);
}

int character_variable_greater_test(char first,
  char second, int output)
{
  int boolean = character_variable_greater(first,
    second);
  return compare_integer_variables(boolean, output);
}

int add_string_characters_test(char* string,int length,
  char character, int amount, char* output)
{
  string=add_string_characters(string,length,character,
    amount);
  return compare_character_strings(string, output,
    length + amount);
}
