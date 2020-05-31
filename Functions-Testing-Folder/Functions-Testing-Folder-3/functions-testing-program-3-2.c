
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-2/\
library-functions-program-2.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-3/\
library-functions-program-3.h"

#include "../../Functions-Testing-Folder/\
Functions-Testing-Folder-3/\
functions-testing-program-3.h"

int integer_hashmap_keywords_test(int** hashmap,
  int value, int* i_keywords)
{
  int* keywords = integer_hashmap_keywords(hashmap,
    value);
  int length = integer_array_length(keywords);
  return compare_integer_arrays(keywords, i_keywords,
    length);
}

int integer_hashmap_value_test(int** hashmap,
  int keyword, int i_value)
{
  int value = integer_hashmap_value(hashmap, keyword);
  return (value == i_value);
}

int delete_hashmap_keyword_test(int** i_hashmap,
  int keyword, int** o_hashmap)
{
  int length = integer_hashmap_length(i_hashmap);
  i_hashmap = delete_hashmap_keyword(i_hashmap,length,
    keyword);
  return compare_matrix_arrays(i_hashmap, o_hashmap,
    length, 2);
}

int reduce_hashmap_value_test(int** i_hashmap,
  int keyword, int** o_hashmap)
{
  i_hashmap = reduce_hashmap_value(i_hashmap,keyword);
  int length = integer_hashmap_length(i_hashmap);
  return compare_matrix_arrays(i_hashmap, o_hashmap,
    length - 1, 2);
}
