
/* This program contains functions that deals
with hashlists and manipulation of them.*/

#ifndef COMPETITIVE_FUNCTIONS_PROGRAM_3_H
#define COMPETITIVE_FUNCTIONS_PROGRAM_3_H

int** generate_integer_hashlist(const int);
int** allocate_array_hashlist(int*, int);
int** allocate_hashlist_value(int**, int);

int* hashlist_keyword_array(int**);

int calculate_hashlist_length(int**);

int calculate_integer_amount(int*, int*);
int hashlist_value_exists(int**, int);
int calculate_hashvalue_index(int**, int);

int** increment_hashlist_value(int**, int);
int** generate_hashlist_value(int**, int);

#endif

/* Made by Roy Hampus Fridholm */
