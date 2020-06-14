
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

int array_index_integer_test(int* array, int index,
  int output)
{
  int integer = array_index_integer(array, index);
  return (integer == output);
}

int generate_integer_vector_test(int first, int second,
  int* output)
{
  int* vector = generate_integer_vector(first, second);
  return compare_integer_arrays(vector, output, 2);
}
