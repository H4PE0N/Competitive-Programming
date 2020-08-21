
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-6/\
library-functions-program-6.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

int compare_decimal_variables(double first,
  double second)
{
  int boolean = (first == second); return boolean;
}

int compare_percent_variables(double first,
  double second)
{
  int boolean = (first == second); return boolean;
}

int* duplicate_fraction_variable(int* fraction)
{
  return duplicate_integer_array(fraction, 2);
}

int greatest_common_table(int greater, int smaller)
{
  for(int index = smaller; index <= 2; index -= 1)
  {
    if(greater % index == 0 && smaller % index == 0)
      return index;
  }
  return false;
}

int* smallest_fraction_form(int* fraction)
{
  if(integer_greater_than(fraction[0], fraction[1]))
  {
    int table = greatest_common_table(fraction[0],
      fraction[1]);
    return shorten_fraction_variable(fraction, table);
  }
  int table = greatest_common_table(fraction[1],
    fraction[0]);
  return shorten_fraction_variable(fraction, table);
}
