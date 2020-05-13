
#ifndef COMPETITIVE_FUNCTIONS_TESTING_1_H
#define COMPETITIVE_FUNCTIONS_TESTING_1_H

/* Inputs: input array, index, integer,
output array; */
int allocate_array_integer_test(int*, int, int,
  int*);

/* Inputs: input array, total length, index,
output array; */
int delete_array_integer_test(int*,int,int,int*);

/* Inputs: input array, total length,
output array; */
int allocate_array_integers_test(int*, int, int*);

// Inputs: total length, output array;
int generate_integer_array_test(int, int*);

// Inputs: input array, length;
int integer_array_length_test(int*, int);

/* Inputs: input array, total length, integer,
boolean; */
int array_contains_integer_test(int*,int,int,int);

// Inputs: input array, index, output array;
int switch_array_integers_test(int*, int, int*);

// Inputs: input array, index, output array;
int sort_integer_iteration_test(int*, int, int*);

/* Inputs: input array, current length, output
array; */
int sort_integer_array_test(int*, int, int*);

/* Inputs: input array, current length, integer,
output array; */
int add_array_integer_test(int*, int, int, int*);

/* Inputs: input array, current length, start,
output array; */
int move_array_integers_test(int*,int,int,int*);

/* Inputs: input array, current length, integer,
output array; */
int remove_array_integer_test(int*,int,int,int*);

// Inputs: input array, integer, output array;
int remove_array_integers_test(int*, int, int*);

#endif
