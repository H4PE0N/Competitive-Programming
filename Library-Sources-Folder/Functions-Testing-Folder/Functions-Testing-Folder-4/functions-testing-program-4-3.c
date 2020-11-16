
#include "../../Library-Functions-Folder/\
library-functions-headers.h"

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

int string_between_integers_test(int first, int second,
  char* output)
{
  char* string = string_between_integers(first,second);
  int length = character_string_length(string);
  return compare_character_strings(string, output,
    length);
}

int string_character_amount_test(char* string,
  int length, char character, int output)
{
  int amount = string_character_amount(string, length,
    character);
  return compare_integer_variables(amount, output);
}

int convert_string_array_test(char* string, int length,
  int* output)
{
  int* array = convert_string_array(string, length);
  return compare_integer_arrays(array, output, length);
}
