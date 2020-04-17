
/* A collection of competitive functions*/

#ifndef COMPETITIVE_FUNCTION_PROGRAM_1_H
#define COMPETITIVE_FUNCTION_PROGRAM_1_H

int** generate_matrix_array(int, int);
int** allocate_matrix_values(int**, int*);

int* generate_empty_array(const int);
int* allocate_array_values(int*, int);

int* bubble_sort_array(int*, const int);
int* bubble_sort_iteration(int*, int);
int* switch_array_numbers(int*, int);

int** generate_integer_hashlist(const int);
int calculate_integer_amount(int*, int*);

int calculate_hashvalue_index(int**, int);
int calculate_hashlist_length(int**, int);
int hashlist_value_exists(int**, int);

int** increment_hashlist_value(int**, int);
int** generate_hashlist_value(int**, int);

int** allocate_hashlist_value(int**, int);
int** allocate_array_hashlist(int*, int);

#endif

/* Made by Roy Hampus Fridholm - 2020/04/15 */
