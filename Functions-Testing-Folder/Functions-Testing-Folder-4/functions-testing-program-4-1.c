
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

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
  int length = character_string_length(string);
  return (length == output);
}

int string_contains_character_test(char* string,
  int length, char character, int output)
{
  int boolean=string_contains_character(string, length,
    character); return (boolean == output);
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
  return compare_character_strings(string,output,
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
