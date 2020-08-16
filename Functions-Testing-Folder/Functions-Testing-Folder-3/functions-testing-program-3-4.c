
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
Library-Functions-Folder-8/\
library-functions-program-8.h"

int check_hashmap_array_test(int** hashmap, int index,
  int output)
{
  int boolean = check_hashmap_array(hashmap, index);
  return (boolean == output);
}

int hashmap_keyword_smaller_test(int** hashmap,
  int first, int second, int output)
{
  int boolean = hashmap_keyword_smaller(hashmap, first,
    second); return (boolean == output);
}

int hashmap_keyword_greater_test(int** hashmap,
  int first, int second, int output)
{
  int boolean = hashmap_keyword_greater(hashmap, first,
    second); return (boolean == output);
}
