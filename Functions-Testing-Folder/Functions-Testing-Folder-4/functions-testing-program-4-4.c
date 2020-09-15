
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

int character_string_section_test(char* string,
  int first, int second, char* output)
{
  char* section=character_string_section(string, first,
    second);
  int length = character_string_length(section);
  return compare_character_strings(section, output,
    length);
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
    character_string_length(string));
}

int compare_character_variables_test(char first,
  char second, int output)
{
  int boolean = compare_character_variables(first,
    second);
  return compare_integer_variables(boolean, output);
}

int characters_inside_string_test(char* string,
  int length, char* characters, int output)
{
  int boolean = characters_inside_string(string,length,
    characters);
  return compare_integer_variables(boolean, output);
}
