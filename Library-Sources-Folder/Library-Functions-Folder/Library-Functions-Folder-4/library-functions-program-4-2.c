
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
    char character = string_index_character(string,
      index);
    doublet = allocate_string_character(doublet, index,
      character);
  }
  return doublet;
}

char* switch_adjacent_characters(char*string,int index)
{
  string = switch_string_characters(string, index,
    index + 1); return string;
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

char* character_string_section(char* string, int first,
  int second)
{
  char* section = generate_character_string(second -
    first + 1);
  for(int index = first; index <= second; index += 1)
  {
    int length = character_string_length(section);
    int character=string_index_character(string,index);
    section = add_string_character(section, length,
      character);
  }
  return section;
}
