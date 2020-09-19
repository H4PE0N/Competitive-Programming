
#include "../../Library-Functions-Folder/\
library-functions-headers.h"

int sort_integer_hashmap_test(int** hashmap,int length,
  int** output)
{
  hashmap = sort_integer_hashmap(hashmap, length);
  return compare_integer_hashmaps(hashmap, output,
    length);
}

int sort_hashmap_iteration_test(int** hashmap,
  int length, int iteration, int** output)
{
  hashmap = sort_hashmap_iteration(hashmap, length,
    iteration);
  return compare_integer_hashmaps(hashmap, output,
    length);
}

int compare_hashmap_content_test(int** first,
  int** second, int length, int output)
{
  int boolean = compare_hashmap_content(first, second,
    length);
  return compare_integer_variables(boolean, output);
}

int duplicate_integer_hashmap_test(int** hashmap,
  int length, int** output)
{
  int** doublet = duplicate_integer_hashmap(hashmap,
    length);
  return compare_integer_hashmaps(doublet, output,
    length);
}

int allocate_hashmap_value_test(int** hashmap,
  int index, int value, int** output)
{
  hashmap = allocate_hashmap_value(hashmap, index,
    value);
  int length = integer_hashmap_length(hashmap);
  return compare_integer_hashmaps(hashmap, output,
    length);
}

int reduce_index_value_test(int** hashmap, int length,
  int index, int** output)
{
  hashmap = reduce_index_value(hashmap, length, index);
  return compare_integer_hashmaps(hashmap, output,
    length);
}

int remove_hashmap_keyword_test(int** hashmap,
  int length, int keyword, int** output)
{
  hashmap = remove_hashmap_keyword(hashmap, length,
    keyword);
  return compare_integer_hashmaps(hashmap, output,
    length);
}

int allocate_hashmap_keyword_test(int** hashmap,
  int index, int keyword, int** output)
{
  hashmap = allocate_hashmap_keyword(hashmap, index,
    keyword);
  int length = integer_hashmap_length(hashmap);
  return compare_integer_hashmaps(hashmap, output,
    length);
}

int increase_index_value_test(int** hashmap, int index,
  int** output)
{
  hashmap = increase_index_value(hashmap, index);
  int length = integer_hashmap_length(hashmap);
  return compare_integer_hashmaps(hashmap, output,
    length);
}

int check_hashmap_array_test(int** hashmap, int index,
  int output)
{
  int boolean = check_hashmap_array(hashmap, index);
  return compare_integer_variables(boolean, output);
}
