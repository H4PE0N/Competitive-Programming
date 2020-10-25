
#include "../../Library-Functions-Folder/\
library-functions-headers.h"

int comapre_coordinate_variables_test(int* first,
  int* second, int output)
{
  int boolean = compare_coordinate_variables(first,
    second);
  return compare_integer_variables(boolean, output);
}

int compare_pair_variables_test(int* first,int* second,
  int output)
{
  int boolean = compare_pair_variables(first, second);
  return compare_integer_variables(boolean, output);
}
