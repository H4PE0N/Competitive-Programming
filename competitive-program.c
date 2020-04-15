
#include <stdio.h>

#include "competitive-function-program.h"

int main(int argc, char** argv)
{
  int* array = (int[]) {5, 4, 3, 2, 1};
  array = bubble_sort_array(array, 5);
  printf("%d\n", array[4]);
  return 0;
}
