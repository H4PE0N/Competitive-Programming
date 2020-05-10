
/* This program contains functions that test the
functions in file competitive-functions-program-4.h */

#ifndef COMPETITIVE_FUNCTIONS_TESTING_4_H
#define COMPETITIVE_FUNCTIONS_TESTING_4_H

/* Inputs: input string, index, character,
output string; */
int allocate_string_value_test(char*,int,char,char*);

// Inputs: input string, total length, output string;
int allocate_string_values_test(char*, int, char*);

// Inputs: total length, output string;
int generate_empty_string_test(int, char*);

// Inputs: input string, output length;
int calculate_string_length_test(char*, int);

// Inputs: string, total length, character, boolean;
int string_contains_character_test(char*,int,char,int);

// Inputs: input string, index, output string;
int switch_string_characters_test(char*, int, char*);

/* Inputs: input string, current length, start,
output string; */
int move_string_characters_test(char*,int,int,char*);

/* Inputs: input string, current length, charcter,
output string; */
int remove_string_character_test(char*,int,char,char*);

/* Inputs: input string, current length, character,
output string; */
int add_string_character_test(char*,int,char,char*);

#endif

/* Made by Roy Hampus Fridholm */
