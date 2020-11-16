
#include "../library-functions-headers.h"

char* sort_character_string(char* string, int length)
{
  for(int index = length; index >= 0; index =index - 1)
  {
    string = sort_string_iteration(string, index);
  }
  return string;
}

int compare_string_content(char* first, char* second,
  int length)
{
  first = sort_character_string(first, length);
  second = sort_character_string(second, length);
  return compare_character_strings(first, second,
    length);
}

char string_index_character(char* string, int index)
{
  char character = *(string + index); return character;
}

int compare_character_strings(char* first,char* second,
  int length)
{
  for(int index = 0; index < length; index = index + 1)
  {
    if(!compare_strings_character(first, second,index))
      return false;
  }
  return true;
}

char* delete_string_character(char* string, int length,
  int index)
{
  string = move_string_characters(string,length,index);
  return allocate_string_character(string, length,
    CHAR_MIN);
}

int string_character_greater(char* string, int first,
  int second)
{
  char f_character = string_index_character(string,
    first);
  char s_character = string_index_character(string,
    second);
  return character_variable_greater(f_character,
    s_character);
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

char* string_between_integers(int first, int second)
{
  int length = (second - first) + 1;
  char* string = generate_character_string(length);
  for(int index = 0; index < length; index = index + 1)
  {
    int integer = (first + index);
    char character =convert_integer_character(integer);
    string = append_string_character(string, index,
      character);
  }
  return string;
}
