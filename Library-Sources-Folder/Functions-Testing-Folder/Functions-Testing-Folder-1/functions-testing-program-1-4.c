
#include "../../Library-Functions-Folder/\
library-functions-headers.h"

int insert_array_integers_test(int* array, int first,
  int second, int integer, int* output)
{
  array = insert_array_integers(array, first, second,
    integer);
  return compare_integer_arrays(array, output, second);
}

int comapre_coordinate_variables_test(int* first,
  int* second, int output)
{
  int boolean = compare_coordinate_variables(first,
    second);
  return compare_integer_variables(boolean, output);
}

int array_between_integers_test(int first, int second,
  int* output)
{
  int* array = array_between_integers(first, second);
  int length = integer_array_length(array);
  return compare_integer_arrays(array, output, length);
}

int convert_array_string_test(int* array, int length,
  char* output)
{
  char* string = convert_array_string(array, length);
  return compare_character_strings(string, output,
    length);
}

int compare_pair_variables_test(int* first,int* second,
  int output)
{
  int boolean = compare_pair_variables(first, second);
  return compare_integer_variables(boolean, output);
}
