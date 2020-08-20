
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

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

int convert_string_binary_test(char* string,int length,
  char** output)
{
  char** binary = convert_string_binary(string,length);
  return compare_string_sentence(binary, output, length,
    8);
}

int convert_binary_character_test(char* binary,
  char output)
{
  return (convert_binary_character(binary) == output);
}

int binary_range_between_test(char* binary,int minimum,
  int maximum, int output)
{
  int boolean = binary_range_between(binary, minimum,
    maximum); return (boolean == output);
}

int convert_binary_string_test(char**binary,int length,
  char* output)
{
  char* string = convert_binary_string(binary, length);
  return compare_character_strings(string, output,
    length);
}

int convert_array_binary_test(int* array, int length,
  char** output)
{
  char** binary = convert_array_binary(array, length);
  return compare_string_sentence(binary,output,length,
    8);
}

int convert_binary_array_test(char** binary,int length,
  int* output)
{
  int* array = convert_binary_array(binary, length);
  return compare_integer_arrays(array, output, length);
}
