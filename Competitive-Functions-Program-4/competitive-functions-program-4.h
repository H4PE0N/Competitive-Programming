
/* This program contains functions that deals
with strings, character arrays. */

#ifndef COMPETITIVE_FUNCTIONS_PROGRAM_4_H
#define COMPETITIVE_FUNCTIONS_PROGRAM_4_H

char* generate_empty_string(const int);
char* allocate_string_values(char*, int);
char* allocate_string_value(char*, int, char);

int calculate_string_length(const char*);
int string_contains_character(char*, int, char);

char* add_string_character(char*, int, char);
char* remove_string_character(char*, int, char);
char* move_string_characters(char*, int, int);
char* switch_string_characters(char*, int);

#endif

/* Made by Roy Hampus Fridholm */
