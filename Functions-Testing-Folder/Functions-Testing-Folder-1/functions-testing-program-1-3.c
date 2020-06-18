
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

int integer_array_total_test(int* array, int length,
  int output)
{
  int total = integer_array_total(array, length);
  return (total == output);
}

int compare_array_integers_test(int* array, int first,
  int second, int output)
{
  int boolean = compare_array_integers(array, first,
    second); return (boolean == output);
}

int compare_arrays_integer_test(int* first,int* second,
  int index, int output)
{
  int boolean = compare_arrays_integer(first, second,
    index); return (boolean == output);
}

int compare_array_content_test(int* first, int* second,
  int length, int output)
{
  int boolean = compare_array_content(first, second,
    length); return (boolean == output);
}

int array_integer_smaller_test(int* array, int first,
  int second, int output)
{
  int boolean = array_integer_smaller(array, first,
    second); return (boolean == output);
}

int array_integer_greater_test(int* array, int first,
  int second, int output)
{
  int boolean = array_integer_greater(array, first,
    second); return (boolean == output);
}
