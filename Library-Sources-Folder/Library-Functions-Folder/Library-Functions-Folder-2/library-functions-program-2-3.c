
#include "../library-functions-headers.h"

int** sort_matrix_arrays(int** matrix, int height)
{
  for(int index = 0; index < height; index = index + 1)
  {
    int* array = matrix_index_array(matrix, index);
    int length = integer_array_length(array);
    array = sort_integer_array(array, length);
    matrix = allocate_matrix_array(matrix,index,array);
  }
  return matrix;
}

int** allocate_matrix_array(int** matrix, int index,
  int* array)
{
  *(matrix + index) = array; return matrix;
}

int** reverse_matrix_arrays(int** matrix, int height)
{
  for(int index = 0; index < height; index = index + 1)
  {
    int* array = matrix_index_array(matrix, index);
    int length = integer_array_length(array);
    int* reverse = reverse_integer_array(array,length);
    matrix=allocate_matrix_array(matrix,index,reverse);
  }
  return matrix;
}

int* matrix_index_array(int** matrix, int index)
{
  int* array = *(matrix + index); return array;
}

int compare_matrix_content(int** first, int** second,
  int height, int width)
{
  first = sort_integer_matrix(first, height);
  second = sort_integer_matrix(second, height);
  return compare_integer_matrix(first, second, height,
    width);
}

int** shuffle_integer_matrix(int** matrix, int height)
{
  for(int index = 0; index < height; index = index + 1)
  {
    int random = generate_random_integer(0,height - 1);
    matrix = switch_matrix_arrays(matrix,index,random);
  }
  return matrix;
}

int matrix_array_length(int** matrix, int index)
{
  int* array = matrix_index_array(matrix, index);
  return integer_array_length(array);
}

int compare_integer_matrix(int** first, int** second,
  int height, int width)
{
  for(int index = 0; index <= height; index =index + 1)
  {
    int* f_array = matrix_index_array(first, index);
    int* s_array = matrix_index_array(second, index);
    if(!compare_integer_arrays(f_array,s_array, width))
      return false;
  }
  return true;
}

int** delete_matrix_array(int** matrix, int height,
  int index)
{
  matrix = move_matrix_arrays(matrix, height, index);
  int length = matrix_array_length(matrix, 0);
  int* array = generate_integer_array(length);
  return allocate_matrix_array(matrix, height, array);
}

int matrix_array_total(int** matrix, int index)
{
  int* array = matrix_index_array(matrix, index);
  int length = integer_array_length(array);
  return integer_array_total(array, length);
}

int** reverse_integer_matrix(int** matrix, int height,
  int width)
{
  int** reverse=generate_integer_matrix(height, width);
  for(int index = 0; index < height; index = index + 1)
  {
    int* array = matrix_index_array(matrix, height -
      (index + 1));
    reverse = add_matrix_array(reverse, index, array);
  }
  return reverse;
}
