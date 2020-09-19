
#include "../../Library-Functions-Folder/\
library-functions-headers.h"

int check_hashmap_array_test(int** hashmap, int index,
  int output)
{
  int boolean = check_hashmap_array(hashmap, index);
  return compare_integer_variables(boolean, output);
}

int hashmap_keyword_smaller_test(int** hashmap,
  int first, int second, int output)
{
  int boolean = hashmap_keyword_smaller(hashmap, first,
    second);
  return compare_integer_variables(boolean, output);
}

int hashmap_keyword_greater_test(int** hashmap,
  int first, int second, int output)
{
  int boolean = hashmap_keyword_greater(hashmap, first,
    second);
  return compare_integer_variables(boolean, output);
}

int convert_hashmap_array_test(int**hashmap,int length,
  int* output)
{
  int* array = convert_hashmap_array(hashmap, length);
  int a_length = integer_array_length(array);
  return compare_integer_arrays(array,output,a_length);
}

int integer_hashmap_total_test(int**hashmap,int length,
  int output)
{
  int total = integer_hashmap_total(hashmap, length);
  return compare_integer_variables(total, output);
}
