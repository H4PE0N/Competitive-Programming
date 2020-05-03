
/* This program contains functions that deals
with binary strings and convertions between 
decimal and characters. */

#ifndef COMPETITIVE_FUNCTIONS_PROGRAM__H
#define COMPETITIVE_FUNCTIONS_PROGRAM__H

char* convert_decimal_binary(const int);
char* convert_character_binary(char);
int convert_binary_decimal(char*);

char* allocate_binary_values(char*, int);
char* allocate_binary_value(char*, int, int);

int reduce_binary_decimal(char*, int, int);
int calculate_binary_length(const int);
int calculate_decimal_binary(char*, int, int);

#endif

/* Made by Roy Hampus Fridholm */
