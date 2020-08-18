
#include <stdlib.h>
#include <math.h>

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-2/\
library-functions-program-2.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-5/\
library-functions-program-5.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-9/\
library-functions-program-9.h"

char* convert_binary_string(char** binary, int length)
{
  char* string = generate_character_string(length);
  for(int index = 0; index < length; index = index + 1)
  {
    char* current=sentence_index_string(binary, index);
    string = add_string_character(string, index,
      convert_binary_character(current));
  }
  return string;
}

char** convert_array_binary(int* array, int length)
{
  char** binary = generate_string_sentence(length, 8);
  for(int index = 0; index < length; index = index + 1)
  {
    int integer = array_index_integer(array, index);
    char* current = convert_integer_binary(integer);
    binary = add_sentence_string(binary,index,current);
  }
  return binary;
}

int* convert_binary_array(char** binary, int length)
{
  int* array = generate_integer_array(length);
  for(int index = 0; index < length; index = index + 1)
  {
    char* current=sentence_index_string(binary, index);
    int integer = convert_binary_integer(current);
    array = add_array_integer(array, index, integer);
  }
  return array;
}
