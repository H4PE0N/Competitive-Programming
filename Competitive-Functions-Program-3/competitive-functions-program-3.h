
/* This program contains functions that deals
with hashmaps and manipulation of them.*/

#ifndef COMPETITIVE_FUNCTIONS_PROGRAM_3_H
#define COMPETITIVE_FUNCTIONS_PROGRAM_3_H

// Function takes in total length of hashmap;
int** generate_integer_hashmap(const int);

// Function takes in current length of array;
int** allocate_array_hashmap(int*, int);

int** allocate_hashmap_value(int**, int);

int* hashmap_keyword_array(int**);

int calculate_hashmap_length(int**);

// Function takes in current length of array;
int calculate_integer_amount(int*, int, int);

int hashmap_keyword_exists(int**, int);

int calculate_hashkey_index(int**, int);

int** increment_hashmap_value(int**, int);

int** generate_hashmap_value(int**, int);

#endif

/* Made by Roy Hampus Fridholm */
