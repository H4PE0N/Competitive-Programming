
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-2/\
library-functions-program-2.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-3/\
library-functions-program-3.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-5/\
library-functions-program-5.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-6/\
library-functions-program-6.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-7/\
library-functions-program-7.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

#include "../../Functions-Testing-Folder/\
Functions-Testing-Folder-1/\
functions-testing-program-1.h"

int main(int argc, char** argv)
{
  srand(time(NULL));

  int* i_array = generate_random_integers(10, 1, 9);

  int length = integer_array_length(i_array);

  int* o_array = duplicate_integer_array(i_array, length);

  i_array = shuffle_integer_array(i_array, length);
  int result = !compare_integer_arrays(i_array,
    o_array, length);
   printf("%d and %d\n", result, compare_integers_content(i_array,
    o_array, length) );

  return 0;
}
