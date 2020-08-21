
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-6/\
library-functions-program-6.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

int greatest_common_table_test(int first, int second,
  int output)
{
  int table = greatest_common_table(first, second);
  return (table == output);
}

int smallest_fraction_form_test(int* fraction,
  int* output)
{
  fraction = smallest_fraction_form(fraction);
  return compare_integer_arrays(fraction, output, 2);
  // This will change to be: compare_fraction_variables
}
