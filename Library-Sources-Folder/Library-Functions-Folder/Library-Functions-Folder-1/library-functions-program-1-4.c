
#include "../library-functions-headers.h"

int array_integer_index(int* array, int length,
  int integer)
{
  int integer_index = length;
  for(int index = (length - 1); index >= 0; index -= 1)
  {
    if(array_index_integer(array, index) == integer)
      { integer_index = index; break; }
  }
  return integer_index;
}

int integers_inside_array(int* array, int length,
  int* integers)
{
  int int_len = integer_array_length(integers);
  if(integer_variable_greater(int_len, length) ||
    int_len <= 0) return false;
  for(int index = 0; index <= length - int_len;index++)
  {
    int* section = integer_array_section(array, index,
      length);
    if(compare_integer_arrays(section, integers,
      int_len)) return true;
  }
  return false;
}

int* increase_array_memory(int* array, int length,
  int increase)
{
  int* increased = generate_integer_array(length +
    increase);
  for(int index = 0; index < length; index = index + 1)
  {
    int integer = array_index_integer(array, index);
    increased = add_array_integer(increased, index,
      integer);
  }
  return increased;
}

int* combine_integer_arrays(int* first, int* second)
{
  int f_length = integer_array_length(first);
  int s_length = integer_array_length(second);
  int* combined = increase_array_memory(first,f_length,
    s_length);
  for(int index = 0; index < s_length; index = index+1)
  {
    int integer = array_index_integer(second, index);
    int current = (index + f_length);
    combined = add_array_integer(combined, current,
      integer);
  }
  return combined;
}
