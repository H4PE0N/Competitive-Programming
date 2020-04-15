
#include <stdio.h>

#include "competitive-function-program.h"

int main(int argc, char** argv)
{
  int** matrix = generate_matrix_array(5, 5);
  printf("Value: %d\n", matrix[4][6]);
  return 0;
}
