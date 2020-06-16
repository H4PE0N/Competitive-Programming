
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

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-9/\
library-functions-program-9.h"

#include "../../Functions-Testing-Folder/\
Functions-Testing-Folder-4/\
functions-testing-program-4.h"

int main(int argc, char** argv)
{
  srand(time(NULL));

  char* string = generate_random_string(2, 97, 98);

  character_string_stdout(string, 2);

  int boolean = compare_string_characters(string, 0, 1);

  int test = compare_string_characters_test(string, 0, 1, boolean);

  printf("Output: %d\tTest: %d\n", boolean, test);

  return 0;
}
