
#ifndef LIBRARY_FUNCTIONS_PROGRAM_9_H
#define LIBRARY_FUNCTIONS_PROGRAM_9_H

char** generate_string_sentence(int, int);

int compare_string_sentence(char**,char**,
  int, int);

char* sentence_index_string(char**, int);

char** generate_random_sentence(int, int,
  int, int);

int sentence_contains_character(char**,int,
  int, char);

void string_sentence_stdout(char**, int,
  int);

char** allocate_sentence_character(char**,
  int, int, char);

char** delete_sentence_character(char**,
  int, int);

char** allocate_sentence_string(char**,int,
  char*);

char** delete_sentence_string(char**, int,
  int);

char** move_sentence_strings(char**, int,
  int);

int string_sentence_height(char**, int);

int sentence_string_length(char**, int);

char** switch_sentence_strings(char**, int,
  int);

char** switch_adjacent_strings(char**,int);

char** duplicate_string_sentence(char**,
  int, int);

char** remove_sentence_character(char**,
  int, char);

char** append_sentence_character(char**,
  int, char);

char** remove_sentence_characters(char**,
  int, char);

int sentence_string_contains(char**, int,
  char);

char string_sentence_character(char**, int,
  int);

char** sort_sentence_strings(char**, int);

char** shuffle_sentence_strings(char**,
  int);

int sentence_character_greater(char**, int,
  int, int);

int sentence_character_smaller(char**, int,
  int, int);

char** insert_sentence_characters(char**,
  int*, int*, char);

int sentence_string_smaller(char**,int,int,
  int);

int sentence_string_greater(char**,int,int,
  int);

char** sort_string_sentence(char**, int);

char** sort_sentence_iteration(char**, int,
  int);

int compare_sentence_content(char**,char**,
  int, int);

int sentence_string_index(char**, int,
  char*);

char** shuffle_string_sentence(char**,int);

char** append_sentence_string(char**, int,
  char*);

char** reverse_string_sentence(char**, int,
  int);

char** reverse_sentence_strings(char**,
  int);

char** remove_sentence_string(char**, int,
  char*);

#endif
