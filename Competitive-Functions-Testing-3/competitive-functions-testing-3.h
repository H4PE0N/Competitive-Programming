
/* This program contains functions that test the
functions in file competitive-functions-program-3.h */

#ifndef COMPETITIVE_FUNCTIONS_TESTING_3_H
#define COMPETITIVE_FUNCTIONS_TESTING_3_H

// Inputs: total length, output hashmap;
int generate_integer_hashmap_test(int, int**);

/* Inputs: array, total length, number,
output amount; */
int calculate_integer_amount_test(int*, int, int,
  int);

// Inputs: hashmap, output length;
int calculate_hashmap_length_test(int**, int);

// Inputs: hashmap, keyword, boolean;
int hashmap_keyword_exists_test(int**,int,int);

// Inputs: hashmap, keyword, output index;
int calculate_keyword_index_test(int**,int,int);

/* Inputs: input hashmap, keyword,
output hashmap; */
int increment_hashmap_value_test(int**,int,int**);

/* Inputs: input hashmap, keyword,
output hashmap; */
int generate_hashmap_value_test(int**,int,int**);

/* Inputs: input hashmap, keyword,
output hashmap; */
int allocate_hashmap_value_test(int**,int,int**);

/* Inputs: array, current length,
output hashmap; */
int allocate_array_hashmap_test(int*,int,int**);

// Inputs: hashmap, output array;
int hashmap_keyword_array_test(int**, int*);

#endif

/* Made by Roy Hampus Fridholm */
