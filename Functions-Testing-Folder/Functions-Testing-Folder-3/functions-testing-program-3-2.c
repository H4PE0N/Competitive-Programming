
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

int reduce_keyword_value_test(int** hashmap,int length,
  int keyword, int** output)
{
  hashmap = reduce_keyword_value(hashmap, length,
    keyword);
  return compare_integer_hashmaps(hashmap, output,
    length);
}

int delete_hashmap_keyword_test(int** hashmap,
  int length, int index, int** output)
{
  hashmap = delete_hashmap_keyword(hashmap, length,
    index);
  return compare_integer_hashmaps(hashmap, output,
    length);
}

int hashmap_index_keyword_test(int** hashmap,int index,
  int output)
{
  int keyword = hashmap_index_keyword(hashmap, index);
  return (keyword == output);
}

int integer_hashmap_keywords_test(int** hashmap,
  int value, int* output)
{
  int* keywords = integer_hashmap_keywords(hashmap,
    value);
  return compare_integer_arrays(keywords, output,
    integer_array_length(keywords));
}

int hashmap_index_value_test(int** hashmap, int index,
  int output)
{
  int value = hashmap_index_value(hashmap, index);
  return (value == output);
}

int hashmap_keyword_value_test(int** hashmap,
  int keyword, int output)
{
  int value = hashmap_keyword_value(hashmap, keyword);
  return (value == output);
}

int allocate_value_keyword_test(int*keywords,int index,
  int** hashmap, int* output)
{
  keywords = allocate_value_keyword(keywords, index,
    hashmap);
  return compare_integer_arrays(keywords, output,
    integer_array_length(keywords));
}

int allocate_keyword_value_test(int** hashmap,
  int keyword, int value, int** output)
{
  hashmap = allocate_keyword_value(hashmap, keyword,
    value);
  int length = integer_hashmap_length(hashmap);
  return compare_integer_hashmaps(hashmap, output,
    length);
}

int allocate_index_value_test(int** hashmap, int index,
  int value, int** output)
{
  hashmap = allocate_index_value(hashmap, index,value);
  int length = integer_hashmap_length(hashmap);
  return compare_integer_hashmaps(hashmap, output,
    length);
}

int compare_integer_hashmaps_test(int** first,
  int** second, int length, int output)
{
  int boolean = compare_integer_hashmaps(first, second,
    length); return (boolean == output);
}
