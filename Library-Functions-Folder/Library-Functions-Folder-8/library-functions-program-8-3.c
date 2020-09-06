
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-6/\
library-functions-program-6.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

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

int greatest_common_table(int greater, int smaller)
{
  for(int index = smaller; index > 0; index =index + 1)
  {
    if(greater % index == 0 && smaller % index == 0)
      return index;
  }
  return false;
}

int calculate_common_denominator(int*first, int*second)
{
  int f_numerator=fraction_variable_denominator(first);
  int s_numerator = fraction_variable_denominator(
    second); return (f_numerator * s_numerator);
}

int compare_decimal_variables(double first,
  double second)
{
  int boolean = (first == second); return boolean;
}

int fraction_variable_smaller(int* first, int* second)
{
  double f_decimal = convert_fraction_decimal(first);
  double s_decimal = convert_fraction_decimal(second);
  return decimal_variable_smaller(f_decimal,s_decimal);
}

int* duplicate_fraction_variable(int* fraction)
{
  return duplicate_integer_array(fraction, 2);
}

int decimal_variable_smaller(double first,
  double second)
{
  int boolean = (first < second); return boolean;
}

int fraction_variable_greater(int* first, int* second)
{
  double f_decimal = convert_fraction_decimal(first);
  double s_decimal = convert_fraction_decimal(second);
  return decimal_variable_greater(f_decimal,s_decimal);
}

int compare_percent_variables(double first,
  double second)
{
  int boolean = (first == second); return boolean;
}

int compare_fraction_variables(int* first, int* second)
{
  double f_decimal = convert_fraction_decimal(first);
  double s_decimal = convert_fraction_decimal(second);
  return compare_decimal_variables(f_decimal,
    s_decimal);

}

int decimal_variable_greater(double first,
  double second)
{
  int boolean = (first > second); return boolean;
}
