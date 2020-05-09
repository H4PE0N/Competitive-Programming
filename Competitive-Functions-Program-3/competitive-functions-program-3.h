
/* This program contains functions that deals
with hashmaps and manipulation of them.*/

#ifndef COMPETITIVE_FUNCTIONS_PROGRAM_3_H
#define COMPETITIVE_FUNCTIONS_PROGRAM_3_H

// Inputs: total length;
int** generate_integer_hashmap(const int);

// Inputs: array, total length, number;
int calculate_integer_amount(int*,int,int);

// Inputs: hashmap;
int calculate_hashmap_length(int**);

// Inputs: hashmap, keyword;
int hashmap_keyword_exists(int**, int);

// Inputs: hashmap, keyword;
int calculate_keyword_index(int**, int);

// Inputs: hashmap, keyword;
int** increment_hashmap_value(int**, int);

// Inputs: hashmap, keyword;
int** generate_hashmap_value(int**, int);

// Inputs: hashmap, keyword;
int** allocate_hashmap_value(int**, int);

// Inputs: array, current length;
int** allocate_array_hashmap(int*, int);

// Inputs: hashmap;
int* hashmap_keyword_array(int**);

#endif

/* Made by Roy Hampus Fridholm */
