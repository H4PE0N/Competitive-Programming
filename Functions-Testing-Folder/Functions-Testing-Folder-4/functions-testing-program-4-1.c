
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

int allocate_string_character_test(char* i_string,
  int index, char character, char* o_string)
{
  i_string = allocate_string_character(i_string,
    index, character);
  return compare_character_strings(i_string,o_string,
    calculate_string_length(i_string));
}

int allocate_string_characters_test(char* i_string,
  int length, char* o_string)
{
  i_string = allocate_string_characters(i_string,
    length);
  return compare_character_strings(i_string,o_string,
    length);
}

int generate_character_string_test(int length,
  char* o_string)
{
  char* string = generate_character_string(length);
  return compare_character_strings(string, o_string,
    length);
}

int calculate_string_length_test(char* string,
  int i_length)
{
  int length = calculate_string_length(string);
  return (length == i_length);
}

int string_contains_character_test(char* string,
  int length, char character, int boolean)
{
  return (string_contains_character(string, length,
    character) == boolean);
}

int switch_string_characters_test(char* i_string,
  int first, int second, char* o_string)
{
  i_string = switch_string_characters(i_string,
    first, second);
  return compare_character_strings(i_string,o_string,
    calculate_string_length(i_string));
}

int move_string_characters_test(char* i_string,
  int length, int start, char* o_string)
{
  i_string = move_string_characters(i_string, length,
    start);
  return compare_character_strings(i_string,o_string,
    length);
}

int remove_string_character_test(char* i_string,
  int length, char character, char* o_string)
{
  i_string = remove_string_character(i_string,length,
    character);
  return compare_character_strings(i_string,o_string,
    calculate_string_length(i_string));
}

int add_string_character_test(char* i_string,
  int length, char character, char* o_string)
{
  i_string = add_string_character(i_string, length,
    character);
  return compare_character_strings(i_string,o_string,
    length + 1);
}

int remove_string_characters_test(char* i_string,
  int length, char character, char* o_string)
{
  i_string = remove_string_characters(i_string,
    length, character);
  return compare_character_strings(i_string,o_string,
    calculate_string_length(i_string));
}
