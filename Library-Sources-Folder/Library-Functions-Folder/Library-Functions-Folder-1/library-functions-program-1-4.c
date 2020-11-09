
#include "../library-functions-headers.h"

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

int compare_pair_variables(int* first, int* second)
{
  int boolean = compare_integer_arrays(first,second,2);
  return boolean;
}

int* increase_array_memory(int* array, int length,
  int increase)
{
  int* increased = generate_integer_array(length +
    increase);
  for(int index = 0; index < length; index = index + 1)
  {
    int integer = array_index_integer(array, index);
    increased = append_array_integer(increased, index,
      integer);
  }
  return increased;
}

int coordinate_variable_height(int* coordinate)
{
  int height = array_index_integer(coordinate, 1);
  return height;
}

int* combine_integer_arrays(int* first, int f_length,
  int* second, int s_length)
{
  int* combined = increase_array_memory(first,f_length,
    s_length);
  for(int index = 0; index < s_length; index = index+1)
  {
    int integer = array_index_integer(second, index);
    int current = (index + f_length);
    combined = append_array_integer(combined, current,
      integer);
  }
  return combined;
}

int coordinate_variable_width(int* coordinate)
{
  int width = array_index_integer(coordinate, 0);
  return width;
}

int* generate_coordinate_variable(int width,int height)
{
  int* coordinate=generate_integer_pair(width, height);
  return coordinate;
}

int array_integer_index(int* array, int length,
  int integer)
{
  for(int index = (length - 1); index >= 0; index -= 1)
  {
    int current = array_index_integer(array, index);
    if(compare_integer_variables(integer, current))
      return index;
  }
  return length;
}

int compare_coordinate_variables(int*first, int*second)
{
  int boolean = compare_integer_arrays(first,second,2);
  return boolean;
}

void coordinate_variable_stdout(int* coordinate)
{
  int width = coordinate_variable_width(coordinate);
  int height = coordinate_variable_height(coordinate);
  printf("(%d, %d)\n", width, height);
}
