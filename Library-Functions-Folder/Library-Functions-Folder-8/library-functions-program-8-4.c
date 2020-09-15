
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

int* inverted_fraction_variable(int* fraction)
{
  int numerator =fraction_variable_numerator(fraction);
  int denominator = fraction_variable_denominator(
    fraction);
  return generate_fraction_variable(denominator,
    numerator);
}

int* generate_integer_products(int integer, int amount)
{
  int* products = generate_integer_array(amount);
  for(int index = 0; index < amount; index = index + 1)
  {
    int product = (integer * (index + 1));
    products=add_array_integer(products,index,product);
  }
  return products;
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

int least_common_denominator(int* first, int* second)
{
  int first_d = fraction_variable_denominator(first);
  int second_d = fraction_variable_denominator(second);
  return smallest_common_product(first_d, second_d);
}
