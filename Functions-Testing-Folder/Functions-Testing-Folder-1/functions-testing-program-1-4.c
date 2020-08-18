
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

int add_array_integers_test(int* array, int length,
  int integer, int amount, int* output)
{
  array = add_array_integers(array, length, integer,
    amount);
  length = integer_array_length(array);
  return compare_integer_arrays(array, output, length);
}
