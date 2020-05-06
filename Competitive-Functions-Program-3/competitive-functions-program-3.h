
/* This program contains functions that deals
with hashmaps and manipulation of them.*/

#ifndef COMPETITIVE_FUNCTIONS_PROGRAM_3_H
#define COMPETITIVE_FUNCTIONS_PROGRAM_3_H

int** generate_integer_hashmap(const int);
int** allocate_array_hashmap(int*, int);
int** allocate_hashmap_value(int**, int);

int* hashmap_keyword_array(int**);

int calculate_hashmap_length(int**);

int calculate_integer_amount(int*, int, int);
int hashmap_value_exists(int**, int);
int calculate_hashvalue_index(int**, int);

int** increment_hashmap_value(int**, int);
int** generate_hashmap_value(int**, int);

#endif

/* Made by Roy Hampus Fridholm */
