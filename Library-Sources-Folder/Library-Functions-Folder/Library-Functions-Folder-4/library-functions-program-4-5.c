
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
