
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

int sort_hashmap_iteration_test(int** hashmap,
  int length, int iteration, int** output)
{
  hashmap = sort_hashmap_iteration(hashmap, length,
    iteration);
  return compare_hashmap_arrays(hashmap,output,length);
}

int compare_hashmap_content_test(int** first,
  int** second, int length, int output)
{
  int boolean = compare_hashmap_content(first, second,
    length); return (boolean == output);
}

int sort_integer_hashmap_test(int** hashmap,int length,
  int** output)
{
  hashmap = sort_integer_hashmap(hashmap, length);
  return compare_hashmap_arrays(hashmap,output,length);
}
