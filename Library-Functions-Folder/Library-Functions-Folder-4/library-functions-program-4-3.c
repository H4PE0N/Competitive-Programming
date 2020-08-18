
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

char* sort_character_string(char* string, int length)
{
  for(int index = length; index >= 0; index =index - 1)
  {
    string = sort_string_iteration(string, index);
  }
  return string;
}

int compare_string_content(char* first, char* second,
  int length)
{
  first = sort_character_string(first, length);
  return compare_character_strings(first,
    sort_character_string(second, length), length);
}

char string_index_character(char* string, int index)
{
  char character = *(string + index); return character;
}

char* generate_higher_alphabet(int characters)
{
  char* alphabet = generate_character_string(
    characters);
  for(int index = 1; index <= characters; index += 1)
  {
    alphabet = allocate_string_character(alphabet,
      index - 1, higher_alphabet_character(index));
  }
  return alphabet;
}

char lower_alphabet_character(int index)
{
  return (index >= 1 && index <= 26 ? 96 + index:'\0');
}

char higher_alphabet_character(int index)
{
  return (index >= 1 && index <= 26 ? 64 + index:'\0');
}

int compare_character_strings(char* first,char* second,
  int length)
{
  for(int index = 0; index < length; index = index + 1)
  {
    if(!compare_strings_character(first, second,index))
      return false;
  }
  return true;
}

char* generate_lower_alphabet(int characters)
{
  char* alphabet = generate_character_string(
    characters);
  for(int index = 1; index <= characters; index += 1)
  {
    alphabet = allocate_string_character(alphabet,
      index - 1, lower_alphabet_character(index));
  }
  return alphabet;
}

char* delete_string_character(char* string, int length,
  int index)
{
  string = move_string_characters(string,length,index);
  return allocate_string_character(string,length,'\0');
}

char* add_string_characters(char* string, int length,
  char character, int amount)
{
  for(int index = 0; index < amount; index = index + 1)
  {
    string = add_string_character(string, length+index,
      character);
  }
  return string;
}
