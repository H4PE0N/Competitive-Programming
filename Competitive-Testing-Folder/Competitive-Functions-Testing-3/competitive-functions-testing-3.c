
#include <stdlib.h>

#include "../../Competitive-Program-Folder/\
Competitive-Functions-Program-1/\
competitive-functions-program-1.h"

#include "../../Competitive-Program-Folder/\
Competitive-Functions-Program-2/\
competitive-functions-program-2.h"

#include "../../Competitive-Program-Folder/\
Competitive-Functions-Program-3/\
competitive-functions-program-3.h"

int generate_integer_hashmap_test(int i_length,
  int** i_hashmap)
{
  int** hashmap = generate_integer_hashmap(i_length);
  int length = integer_hashmap_length(hashmap);
  return compare_matrix_arrays(hashmap, i_hashmap,
    length, 2);
}

int array_integer_amount_test(int* array, int length,
  int number, int i_amount)
{
  int amount=array_integer_amount(array,length,number);
  return (amount == i_amount);
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

int integer_keyword_index_test(int** hashmap,
  int keyword, int i_index)
{
  int index = integer_keyword_index(hashmap, keyword);
  return (index == i_index);
}

int increment_hashmap_value_test(int** i_hashmap,
  int keyword, int** o_hashmap)
{
  i_hashmap=increment_hashmap_value(i_hashmap,keyword);
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
  i_hashmap =allocate_hashmap_value(i_hashmap,keyword);
  int length = integer_hashmap_length(i_hashmap);
  return compare_matrix_arrays(i_hashmap, o_hashmap,
    length, 2);
}

int convert_array_hashmap_test(int* array,int i_length,
  int** i_hashmap)
{
  int** hashmap=convert_array_hashmap(array,i_length);
  int length = integer_hashmap_length(hashmap);
  return compare_matrix_arrays(hashmap, i_hashmap,
    length, 2);
}

int hashmap_keyword_array_test(int** hashmap,
  int* i_array)
{
  int* array = hashmap_keyword_array(hashmap);
  int length = integer_array_length(array);
  return compare_integer_arrays(array,i_array,length);
}

int integer_value_keywords_test(int** hashmap,
  int value, int i_length, int* o_keywords)
{
  int* i_keywords = integer_value_keywords(hashmap,
    value, i_length);
  int length = integer_array_length(i_keywords);
  return compare_integer_arrays(i_keywords,o_keywords,
    length);
}

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
