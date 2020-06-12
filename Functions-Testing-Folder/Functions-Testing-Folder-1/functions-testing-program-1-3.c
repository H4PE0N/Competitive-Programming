
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

int array_index_integer_test(int* array, int index,
  int i_integer)
{
  int integer = array_index_integer(array, index);
  return (integer == i_integer);
}

int generate_integer_vector_test(int first,
  int second, int* i_vector)
{
  int* vector = generate_integer_vector(first,
    second);
  return compare_integer_arrays(vector, i_vector,2);
}
