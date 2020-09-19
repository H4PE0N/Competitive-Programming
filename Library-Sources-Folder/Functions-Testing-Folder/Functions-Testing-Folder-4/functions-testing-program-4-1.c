
#include "../../Library-Functions-Folder/\
library-functions-headers.h"

int allocate_string_character_test(char* string,
  int index, char character, char* output)
{
  string = allocate_string_character(string, index,
    character);
  return compare_character_strings(string, output,
    character_string_length(string));
}

int allocate_string_characters_test(char* string,
  int length, char* output)
{
  string = allocate_string_characters(string, length);
  return compare_character_strings(string, output,
    length);
}

int generate_character_string_test(int length,
  char* output)
{
  char* string = generate_character_string(length);
  return compare_character_strings(string, output,
    length);
}

int character_string_length_test(char* string,
  int output)
{
  return (character_string_length(string) == output);
}

int string_contains_character_test(char* string,
  int length, char character, int output)
{
  int boolean=string_contains_character(string, length,
    character);
  return compare_integer_variables(boolean, output);
}

int switch_string_characters_test(char* string,
  int first, int second, char* output)
{
  string = switch_string_characters(string, first,
    second);
  return compare_character_strings(string, output,
    character_string_length(string));
}

int move_string_characters_test(char* string,
  int length, int start, char* output)
{
  string = move_string_characters(string,length,start);
  return compare_character_strings(string, output,
    length);
}

int remove_string_character_test(char* string,
  int length, char character, char* output)
{
  string = remove_string_character(string, length,
    character);
  return compare_character_strings(string, output,
    character_string_length(string));
}

int add_string_character_test(char* string, int length,
  char character, char* output)
{
  string = add_string_character(string, length,
    character);
  return compare_character_strings(string, output,
    length + 1);
}

int remove_string_characters_test(char* string,
  int length, char character, char* output)
{
  string = remove_string_characters(string, length,
    character);
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
