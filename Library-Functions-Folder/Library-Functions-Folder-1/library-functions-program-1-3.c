
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#include "../Library-Functions-Folder-8/\
library-functions-program-8.h"

#include "../Library-Functions-Folder-1/\
library-functions-program-1.h"

void integer_array_stdout(int* array, int length)
{
  for(int index = 0; index < length; index = index+1)
  {
    printf("%d ", *(array + index));
  }
}
