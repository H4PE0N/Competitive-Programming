
#include <stdlib.h>

#include "../../Competitive-Program-Folder/\
Competitive-Functions-Program-4/\
competitive-functions-program-4.h"

// Inputs: input string, index, character,output string;
int allocate_string_character_test(char* i_string,
  int index, char character, char* o_string)
{
  i_string = allocate_string_character(i_string, index,
    character);
  return compare_strings_together(i_string, o_string,
    calculate_string_length(i_string));
}

// Inputs: input string, total length, output string;
int allocate_string_characters_test(char* i_string,
  int t_length, char* o_string)
{
  i_string = allocate_string_characters(i_string,
    t_length);
  return compare_strings_together(i_string, o_string,
    t_length);
}

// Inputs: total length, output string;
int generate_empty_string_test(int t_length,
  char* o_string)
{
  char* string = generate_empty_string(t_length);
  return compare_strings_together(string, o_string,
    t_length);
}

// Inputs: input string, output length;
int calculate_string_length_test(char* i_string,
  int o_length)
{
  int length = calculate_string_length(i_string);
  return (length == o_length);
}

// Inputs: string, total length, character, boolean;
int string_contains_character_test(char* string,
  int t_length, char character, int boolean)
{
  return (string_contains_character(string, t_length,
    character) == boolean);
}

// Inputs: input string, index, output string;
int switch_string_characters_test(char* i_string,
  int index, char* o_string)
{
  i_string = switch_string_characters(i_string,
    index);
  return compare_strings_together(i_string,o_string,
    calculate_string_length(i_string));
}

/* Inputs: input string, current length, start,
output string; */
int move_string_characters_test(char* i_string,
  int c_length, int start, char* o_string)
{
  i_string = move_string_characters(i_string,c_length,
    start);
  return compare_strings_together(i_string, o_string,
    c_length);
}

/* Inputs: input string, current length, charcter,
output string; */
int remove_string_character_test(char* i_string,
  int c_length, char character, char* o_string)
{
  i_string = remove_string_character(i_string,
    c_length, character);
  return compare_strings_together(i_string, o_string,
    c_length);
}

/* Inputs: input string, current length, character,
output string; */
int add_string_character_test(char* i_string,
  int c_length, char character, char* o_string)
{
  i_string = add_string_character(i_string,c_length,
    character);
  return compare_strings_together(i_string,o_string,
    c_length + 1);
}
