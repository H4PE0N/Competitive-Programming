
#include "../../Library-Functions-Folder/\
library-functions-headers.h"

int combine_character_strings_test(char* first,
  char* second, char* output)
{
  char* combined = combine_character_strings(first,
    second);
  int length = character_string_length(combined);
  return compare_character_strings(combined, output,
    length);
}

int increase_string_memory_test(char*string,int length,
  int increase, char* output)
{
  char* increased=increase_string_memory(string,length,
    increase);
  return compare_character_strings(increased, output,
    length + increase);
}

int insert_string_characters_test(char* string,
  int first, int second, char character, char* output)
{
  string=insert_string_characters(string,first, second,
    character);
  return compare_character_strings(string, output,
    second);
}
