
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-5/\
library-functions-program-5.h"

#include "../../Functions-Testing-Folder/\
Functions-Testing-Folder-5/\
functions-testing-program-5.h"

int convert_binary_character_test(char* binary,
  char i_character)
{
  int character = convert_binary_character(binary);
  return (character == i_character);
}
