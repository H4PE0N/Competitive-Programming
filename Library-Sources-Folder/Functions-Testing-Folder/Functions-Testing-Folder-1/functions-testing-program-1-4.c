
#include "../../Library-Functions-Folder/\
library-functions-headers.h"

int add_array_integers_test(int* array, int length,
  int integer, int amount, int* output)
{
  array = add_array_integers(array, length, integer,
    amount);
  length = integer_array_length(array);
  return compare_integer_arrays(array, output, length);
}
