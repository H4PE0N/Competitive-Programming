
#include "../../Library-Functions-Folder/\
library-functions-headers.h"

int convert_character_integer_test(char character,
  int output)
{
  int integer = convert_character_integer(character);
  return compare_integer_variables(integer, output);
}

int smallest_fraction_form_test(int* fraction,
  int* output)
{
  fraction = smallest_fraction_form(fraction);
  return compare_integer_arrays(fraction, output, 2);
}

int fraction_variable_greater_test(int* first,
  int* second, int output)
{
  int boolean=fraction_variable_greater(first, second);
  return compare_integer_variables(boolean, output);
}

int convert_integer_character_test(int integer,
  char output)
{
  char character = convert_integer_character(integer);
  return compare_character_variables(character,output);
}

int fraction_variable_smaller_test(int* first,
  int* second, int output)
{
  int boolean=fraction_variable_smaller(first, second);
  return compare_integer_variables(boolean, output);
}

int compare_fraction_variables_test(int* first,
  int* second, int output)
{
  int boolean=compare_fraction_variables(first,second);
  return compare_integer_variables(boolean, output);
}
