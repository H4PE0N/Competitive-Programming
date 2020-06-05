
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

int array_index_integer_test(int* array, int index,//
  int i_integer)
{
  int integer = array_index_integer(array, index);
  return (integer == i_integer);
}
