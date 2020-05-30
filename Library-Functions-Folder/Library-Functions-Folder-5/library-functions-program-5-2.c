
#include <stdlib.h>
#include <math.h>

#include "../Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../Library-Functions-Folder-5/\
library-functions-program-5.h"

int convert_binary_integer(char* binary)
{
  int length = calculate_string_length(binary),
    integer = 0;
  for(int index = 0; index < length; index = index+1)
  {
    integer = calculate_integer_binary(binary,index,
      integer);
  }
  return integer;
}

char convert_binary_character(char* binary)
{
  char character = convert_binary_integer(binary);
  return character;
}
