
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-6/\
library-functions-program-6.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

int greatest_common_table_test(int greater,int smaller,
  int output)
{
  int table = greatest_common_table(greater, smaller);
  return compare_integer_variables(table, output);
}

int smallest_fraction_form_test(int* fraction,
  int* output)
{
  fraction = smallest_fraction_form(fraction);
  return compare_integer_arrays(fraction, output, 2);
}

int calculate_common_denominator_test(int* first,
  int* second, int output)
{
  int denominator = calculate_common_denominator(first,
    second);
  return compare_integer_variables(denominator,output);
}

int fraction_variable_greater_test(int* first,
  int* second, int output)
{
  int boolean=fraction_variable_greater(first, second);
  return compare_integer_variables(boolean, output);
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

int decimal_variable_smaller_test(double first,
  double second, int output)
{
  int boolean = decimal_variable_smaller(first,second);
  return compare_integer_variables(boolean, output);
}

int smallest_common_product_test(int smallest,
  int greatest, int output)
{
  int product = smallest_common_product(smallest,
    greatest);
  return compare_integer_variables(product, output);
}

int decimal_variable_greater_test(double first,
  double second, int output)
{
  int boolean = decimal_variable_greater(first,second);
  return compare_integer_variables(boolean, output);
}

int generate_integer_products_test(int integer,
  int amount, int* output)
{
  int* products = generate_integer_products(integer,
    amount);
  return compare_integer_arrays(products, output,
    integer_array_length(products));
}

int inverted_fraction_variable_test(int* fraction,
  int* output)
{
  int* inverted = inverted_fraction_variable(fraction);
  return compare_fraction_variables(inverted, output);
}

int least_common_denominator_test(int* first,
  int* second, int output)
{
  int denominator = least_common_denominator(first,
    second);
  return compare_integer_variables(denominator,output);
}
