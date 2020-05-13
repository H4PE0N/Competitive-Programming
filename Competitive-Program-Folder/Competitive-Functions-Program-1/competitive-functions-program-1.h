
#ifndef COMPETITIVE_FUNCTIONS_PROGRAM_1_H
#define COMPETITIVE_FUNCTIONS_PROGRAM_1_H

// Inputs: array, index, integer;
int* allocate_array_integer(int*,int,int);

// Inputs: array, total length;
int* allocate_array_integers(int*, int);

// Inputs: total length;
int* generate_integer_array(const int);

// Inputs: array;
int integer_array_length(const int*);

// Inputs: array, total length;
int array_contains_integer(int*,int,int);

// Inputs: array, index;
int* switch_array_integers(int*, int);

// Inputs: array, iteration;
int* sort_integer_iteration(int*, int);

// Inputs: array, current length;
int* sort_integer_array(int*, int);

// Inputs: array, current length, integer;
int* add_array_integer(int*, int, int);

// Inputs: array, current length, start;
int* move_array_integers(int*, int, int);

// Inputs: array, current length, integer;
int* remove_array_integer(int*, int, int);

// Inputs: array, total length, index;
int* delete_array_integer(int*, int, int);

/* Inputs: first array, second array,
total length; */
int compare_integer_arrays(int*, int*,
  int);

// Inputs: array, integer;
int* remove_array_integers(int*, int);

#endif
