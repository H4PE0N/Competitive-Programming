
#include "../library-functions-headers.h"

char* reverse_character_string(char* string,int length)
{
  char* reverse = generate_character_string(length);
  for(int index = 0; index < length; index = index + 1)
  {
    char character = string_index_character(string,
      length - (index + 1));
    reverse = append_string_character(reverse, index,
      character);
  }
  return reverse;
}

int character_variable_greater(char first, char second)
{
  int boolean = (first > second); return boolean;
}

int string_character_amount(char* string, int length,
  char character)
{
  int amount = 0;
  for(int index = 0; index < length; index = index + 1)
  {
    char current=string_index_character(string, index);
    if(compare_character_variables(character, current))
      amount = increase_integer_variable(amount, 1);
  }
  return amount;
}

char* switch_adjacent_characters(char*string,int index)
{
  string = switch_string_characters(string, index,
    index + 1); return string;
}

char* sort_string_iteration(char* string,int iteration)
{
  for(int index = 0; index < (iteration - 1); index++)
  {
    if(string_character_smaller(string,index, index+1))
      continue;
    string = switch_adjacent_characters(string, index);
  }
  return string;
}

int* convert_string_array(char* string, int length)
{
  int* array = generate_integer_array(length);
  for(int index = 0; index < length; index = index + 1)
  {
    char character = string_index_character(string,
      index);
    int integer = convert_character_integer(character);
    array = append_array_integer(array, index,integer);
  }
  return array;
}
