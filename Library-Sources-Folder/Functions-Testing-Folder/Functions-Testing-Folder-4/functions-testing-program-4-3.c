
#include "../../Library-Functions-Folder/\
library-functions-headers.h"

int generate_lower_alphabet_test(int characters,
  char* output)
{
  char* alphabet = generate_lower_alphabet(characters);
  return compare_character_strings(alphabet, output,
    characters);
}

int generate_higher_alphabet_test(int characters,
  char* output)
{
  char* alphabet =generate_higher_alphabet(characters);
  return compare_character_strings(alphabet, output,
    characters);
}

int lower_alphabet_character_test(int index,
  char output)
{
  char character = lower_alphabet_character(index);
  return (character == output);
}

int delete_string_character_test(char* string,
  int length, int index, char* output)
{
  string=delete_string_character(string, length,index);
  return compare_character_strings(string, output,
    length);
}

int compare_string_characters_test(char* string,
  int first, int second, int output)
{
  int boolean = compare_string_characters(string,first,
    second);
  return compare_integer_variables(boolean, output);
}

int higher_alphabet_character_test(int index,
  char output)
{
  char character = higher_alphabet_character(index);
  return (character == output);
}

int compare_strings_character_test(char* first,
  char* second, int index, int output)
{
  int boolean = compare_strings_character(first,second,
    index);
  return compare_integer_variables(boolean, output);
}

int string_character_greater_test(char* string,
  int first, int second, int output)
{
  int boolean = string_character_greater(string, first,
    second);
  return compare_integer_variables(boolean, output);
}

int string_character_smaller_test(char* string,
  int first, int second, int output)
{
  int boolean = string_character_smaller(string, first,
    second);
  return compare_integer_variables(boolean, output);
}

int reverse_character_string_test(char* string,
  int length, char* output)
{
  char*reverse=reverse_character_string(string,length);
  return compare_character_strings(reverse, output,
    length);
}

int string_character_index_test(char*string,int length,
  char character, int output)
{
  int index = string_character_index(string, length,
    character);
  return compare_integer_variables(index, output);
}

int character_string_section_test(char* string,
  int first, int second, char* output)
{
  char* section=character_string_section(string, first,
    second);
  int length = character_string_length(section);
  return compare_character_strings(section, output,
    length);
}
