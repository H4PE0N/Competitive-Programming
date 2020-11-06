
#include "../library-functions-headers.h"

int least_common_denominator(int* first, int* second)
{
  int first_d = fraction_variable_denominator(first);
  int second_d = fraction_variable_denominator(second);
  return smallest_common_product(first_d, second_d);
}

int greatest_common_table(int greater, int smaller)
{
  for(int table = smaller; table > 0; table =table - 1)
  {
    if(greater % table == 0 && smaller % table == 0)
      return table;
  }
  return false;
}

int integer_range_between(int integer, int minimum,
  int maximum)
{
  return (!integer_variable_greater(integer, maximum)
    && !integer_variable_smaller(integer, minimum));
}

double convert_decimal_percent(double decimal)
{
  double percent = (decimal * 100); return percent;
}

int increase_integer_variable(int variable,int integer)
{
  variable = (variable + integer); return variable;
}

int* smallest_fraction_form(int* fraction)
{
  if(integer_variable_greater(fraction[0],fraction[1]))
  {
    int table = greatest_common_table(fraction[0],
      fraction[1]);
    return shorten_fraction_variable(fraction, table);
  }
  int table = greatest_common_table(fraction[1],
    fraction[0]);
  return shorten_fraction_variable(fraction, table);
}

int integer_power_operation(int base, int exponent)
{
  int product = 1;
  for(int index = 0; index < exponent; index=index + 1)
  {
    product = (product * base);
  }
  return product;
}

int fraction_variable_smaller(int* first, int* second)
{
  double f_decimal = convert_fraction_decimal(first);
  double s_decimal = convert_fraction_decimal(second);
  return decimal_variable_smaller(f_decimal,s_decimal);
}

int compare_integer_variables(int first, int second)
{
  int boolean = (first == second); return boolean;
}

int* generate_random_fraction(double minimum,
  double maximum)
{
  double decimal = generate_random_decimal(minimum,
    maximum); return convert_decimal_fraction(decimal);
}

int integer_variable_smaller(int first, int second)
{
  int boolean = (first < second); return boolean;
}

int smallest_common_product(int smallest, int greatest)
{
  int product = (smallest * greatest);
  int* s_products = generate_integer_products(smallest,
    product / smallest);
  int* g_products = generate_integer_products(greatest,
    product / greatest);
  for(int index = 0; index < product/greatest; index++)
  {
    int integer=array_index_integer(g_products,index);
    if(array_contains_integer(s_products, product /
      smallest, integer)) return integer;
  }
  return product;
}
