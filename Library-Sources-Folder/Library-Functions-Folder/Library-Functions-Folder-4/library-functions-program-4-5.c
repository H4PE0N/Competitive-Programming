
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

char random_index_character(char* string, int length)
{
  int index = generate_random_integer(0, length - 1);
  return string_index_character(string, index);
}
