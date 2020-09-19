
#include "../library-functions-headers.h"

char generate_random_character(int minimum,int maximum)
{
  char character = generate_random_integer(minimum,
    maximum); return character;
}

int character_range_between(char character,int minimum,
  int maximum)
{
  int boolean=integer_range_between(character, minimum,
    maximum); return boolean;
}

char* remove_string_characters(char* string,int length,
  char character)
{
  while(string_contains_character(string, length,
    character))
  {
    string = remove_string_character(string, length,
      character);
  }
  return string;
}

char* generate_random_string(int length, int minimum,
  int maximum)
{
  char* string = generate_character_string(length);
  for(int index = 0; index < length; index = index + 1)
  {
    string = allocate_string_character(string, index,
      generate_random_character(minimum, maximum));
  }
  return string;
}

void character_string_stdout(char* string, int length)
{
  for(int index = 0; index < length; index = index + 1)
  {
    printf("%c ",string_index_character(string,index));
  }
  printf("\n");
}

char* shuffle_character_string(char* string,int length)
{
  for(int index = 0; index < length; index = index + 1)
  {
    string = switch_string_characters(string, index,
      generate_random_integer(0, length - 1));
  }
  return string;
}

char* duplicate_character_string(char* string,
  int length)
{
  char* doublet = generate_character_string(length);
  for(int index = 0; index < length; index = index + 1)
  {
    doublet = allocate_string_character(doublet, index,
      string_index_character(string, index));
  }
  return doublet;
}

char* switch_adjacent_characters(char*string,int index)
{
  return switch_string_characters(string, index,
    index + 1);
}

char* sort_string_iteration(char* string,int iteration)
{
  for(int index = 0; index < (iteration - 1); index++)
  {
    if(string_character_smaller(string,index, index+1))
      continue;
    string = switch_adjacent_characters(string, index);
  }
  return string;
}
