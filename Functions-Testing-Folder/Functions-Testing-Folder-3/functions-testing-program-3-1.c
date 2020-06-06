
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-2/\
library-functions-program-2.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-3/\
library-functions-program-3.h"

int generate_integer_hashmap_test(int i_length,
  int** i_hashmap)
{
  int** hashmap = generate_integer_hashmap(i_length),
    length = integer_hashmap_length(hashmap);
  return compare_matrix_arrays(hashmap, i_hashmap,
    length, 2);
}

int integer_hashmap_length_test(int** hashmap,
  int length)
{
  return integer_hashmap_length(hashmap) == length;
}

int hashmap_keyword_exists_test(int** hashmap,
  int keyword, int boolean)
{
  int output = hashmap_keyword_exists(hashmap,keyword);
  return (output == boolean);
}

int hashmap_keyword_index_test(int** hashmap,
  int keyword, int i_index)
{
  int index = hashmap_keyword_index(hashmap, keyword);
  return (index == i_index);
}

int increase_hashmap_value_test(int** i_hashmap,
  int keyword, int** o_hashmap)
{
  i_hashmap=increase_hashmap_value(i_hashmap, keyword);
  int length = integer_hashmap_length(i_hashmap);
  return compare_matrix_arrays(i_hashmap, o_hashmap,
    length, 2);
}

int generate_hashmap_keyword_test(int** i_hashmap,
  int keyword, int** o_hashmap)
{
  i_hashmap = generate_hashmap_keyword(i_hashmap,
    keyword);
  int length = integer_hashmap_length(i_hashmap);
  return compare_matrix_arrays(i_hashmap, o_hashmap,
    length, 2);
}

int allocate_hashmap_value_test(int** i_hashmap,
  int keyword, int** o_hashmap)
{
  i_hashmap=allocate_hashmap_value(i_hashmap, keyword);
  int length = integer_hashmap_length(i_hashmap);
  return compare_matrix_arrays(i_hashmap, o_hashmap,
    length, 2);
}

int convert_array_hashmap_test(int* array,int i_length,
  int** i_hashmap)
{
  int** hashmap=convert_array_hashmap(array, i_length);
  int length = integer_hashmap_length(hashmap);
  return compare_matrix_arrays(hashmap, i_hashmap,
    length, 2);
}

int hashmap_keyword_array_test(int** hashmap,
  int i_length, int* i_array)
{
  int* array = hashmap_keyword_array(hashmap,i_length);
  int length = integer_array_length(array);
  return compare_integer_arrays(array,i_array, length);
}

int integer_value_keywords_test(int** hashmap,
  int value, int i_length, int* o_keywords)
{
  int* i_keywords = integer_value_keywords(hashmap,
    value, i_length);
  int length = integer_array_length(i_keywords);
  return compare_integer_arrays(i_keywords, o_keywords,
    length);
}
