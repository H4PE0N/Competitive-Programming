
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

int character_string_section_test(char* string,
  int first, int second, char* output)
{
  char* section=character_string_section(string, first,
    second);
  int length = character_string_length(section);
  return compare_character_strings(section, output,
    length);
}
