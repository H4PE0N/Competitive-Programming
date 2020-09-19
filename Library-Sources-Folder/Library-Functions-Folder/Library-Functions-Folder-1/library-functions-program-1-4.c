
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

int array_integer_smaller(int* array, int first,
  int second)
{
  int integer = array_index_integer(array, first);
  return integer < array_index_integer(array, second);
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

int* integer_array_section(int* array, int first,
  int second)
{
  int* section=generate_integer_array(second-first +1);
  for(int index = first; index <= second; index += 1)
  {
    int length = integer_array_length(section);
    int integer = array_index_integer(array, index);
    section=add_array_integer(section,length, integer);
  }
  return section;
}

int* add_array_integers(int* array, int length,
  int integer, int amount)
{
  for(int index = 0; index < amount; index = index + 1)
  {
    int current = (length + index);
    array = add_array_integer(array, current, integer);
  }
  return array;
}
