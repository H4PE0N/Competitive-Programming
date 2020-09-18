
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
  return compare_integer_variables(integer, output);
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
  return compare_integer_variables(total, output);
}

int compare_array_integers_test(int* array, int first,
  int second, int output)
{
  int boolean = compare_array_integers(array, first,
    second);
  return compare_integer_variables(boolean, output);
}

int compare_arrays_integer_test(int* first,int* second,
  int index, int output)
{
  int boolean = compare_arrays_integer(first, second,
    index);
  return compare_integer_variables(boolean, output);
}

int compare_array_content_test(int* first, int* second,
  int length, int output)
{
  int boolean = compare_array_content(first, second,
    length);
  return compare_integer_variables(boolean, output);
}

int array_integer_smaller_test(int* array, int first,
  int second, int output)
{
  int boolean = array_integer_smaller(array, first,
    second);
  return compare_integer_variables(boolean, output);
}

int array_integer_greater_test(int* array, int first,
  int second, int output)
{
  int boolean = array_integer_greater(array, first,
    second);
  return compare_integer_variables(boolean, output);
}

int reverse_integer_array_test(int* array, int length,
  int* output)
{
  int* reverse = reverse_integer_array(array, length);
  return compare_integer_arrays(reverse,output,length);
}

int array_integer_index_test(int* array, int length,
  int integer, int output)
{
  int index =array_integer_index(array,length,integer);
  return compare_integer_variables(index, output);
}

int integers_inside_array_test(int* array, int length,
  int* integers, int output)
{
  int boolean = integers_inside_array(array, length,
    integers);
  return compare_integer_variables(boolean, output);
}

int integer_array_section_test(int* array, int first,
  int second, int* output)
{
  int* section = integer_array_section(array, first,
    second);
  int length = integer_array_length(section);
  return compare_integer_arrays(section,output,length);
}
