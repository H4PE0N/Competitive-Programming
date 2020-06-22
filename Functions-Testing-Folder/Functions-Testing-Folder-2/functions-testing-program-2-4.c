
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-2/\
library-functions-program-2.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

int matrix_array_smaller_test(int** matrix, int height,
  int first, int second, int output)
{
  int boolean = matrix_array_smaller(matrix, height,
    first, second); return (boolean == output);
}

int reverse_integer_matrix_test(int**matrix,int height,
  int width, int** output)
{
  matrix = reverse_integer_matrix(matrix,height,width);
  return compare_integer_matrix(matrix, output, height,
    width);
}

int reverse_matrix_arrays_test(int** matrix,int height,
  int width, int** output)
{
  matrix = reverse_matrix_arrays(matrix, height,width);
  return compare_integer_matrix(matrix, output, height,
    width);
}
