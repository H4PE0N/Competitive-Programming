
#ifndef LIBRARY_FUNCTIONS_PROGRAM_3_H
#define LIBRARY_FUNCTIONS_PROGRAM_3_H

int** generate_integer_hashmap(int);

int integer_hashmap_length(int**);

int hashmap_keyword_exists(int**, int);

int hashmap_keyword_index(int**, int);

int** increase_keyword_value(int**,int);

int** generate_hashmap_keyword(int**,
  int);

int** increase_hashmap_value(int**,int);

int** convert_array_hashmap(int*, int);

int* hashmap_keyword_array(int**, int);

int hashmap_keyword_value(int**, int);

int* hashmap_value_keywords(int**, int,
  int);

int* integer_hashmap_keywords(int**,
  int);

int** delete_hashmap_keyword(int**, int,
  int);

int** reduce_hashmap_value(int**, int);

void integer_hashmap_stdout(int**, int);

int** generate_random_hashmap(int, int,
  int);

int hashmap_index_value(int**, int);

int hashmap_index_keyword(int**, int);

int* allocate_value_keyword(int*, int,
  int**);

int** allocate_index_value(int**, int,
  int);

int** allocate_keyword_value(int**, int,
  int);

#endif
