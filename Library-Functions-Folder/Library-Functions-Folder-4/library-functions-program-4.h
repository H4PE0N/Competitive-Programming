
#ifndef LIBRARY_FUNCTIONS_PROGRAM_4_H
#define LIBRARY_FUNCTIONS_PROGRAM_4_H

char* allocate_string_character(char*,
  int, char);

char* allocate_string_characters(char*,
  int);

char* generate_character_string(int);

int calculate_string_length(char*);

int string_contains_character(char*,
  int, char);

char* switch_string_characters(char*,
  int, int);

char* move_string_characters(char*,int,
  int);

char* remove_string_character(char*,
  int,char);

char* add_string_character(char*, int,
  char);

int compare_character_strings(char*,
  char*, int);

char* remove_string_characters(char*,
  int, char);

char generate_random_character(int,
  int);

int character_range_between(char, int,
  int);

char* generate_random_string(int, int,
  int);

void character_string_stdout(char*,
  int);

char* shuffle_character_string(char*,
  int);

char* duplicate_character_string(char*,
  int);

char* switch_adjacent_characters(char*,
  int);

char* sort_string_iteration(char*,int);

char* sort_character_string(char*,int);

int compare_string_content(char*,
  char*, int);

char string_index_character(char*,int);

char* generate_lower_alphabet(int);

char* generate_higher_alphabet(int);

char lower_alphabet_character(int);

char higher_alphabet_character(int);

char* delete_string_character(char*,int,
  int);

#endif
