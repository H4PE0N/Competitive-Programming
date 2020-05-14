
#ifndef COMPETITIVE_FUNCTIONS_TESTING_6_H
#define COMPETITIVE_FUNCTIONS_TESTING_6_H

// Inputs: array, current length, output median;
int calculate_odd_median_test(int*, int, double);

// Inputs: array, current length, output median;
int calculate_even_median_test(int*, int, double);

// Inputs: array, current length, output median;
int calculate_array_median_test(int*, int, double);

// Inputs: array, current length, output average;
int calculate_array_average_test(int*,int,double);

/* Inputs: hashmap, index, common value,
output common value; */
int update_common_value_test(int**, int, int,int);

/* Inputs: hashmap, index, common value,
common key, output common key; */
int update_common_key_test(int**,int,int,int,int);

// Inputs: hashmap, current length, output common;
int calculate_common_value_test(int**, int, int);

// Inputs: array, current length, output typical;
int calculate_array_typical_test(int*, int, int);

#endif
