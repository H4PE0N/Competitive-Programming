
#include "../library-functions-headers.h"

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

int character_variable_smaller(char first, char second)
{
  int boolean = (first < second); return boolean;
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

int compare_character_variables(char first,char second)
{
  int boolean = (first == second); return boolean;
}

char* delete_string_character(char* string, int length,
  int index)
{
  string = move_string_characters(string,length,index);
  return allocate_string_character(string,length,'\0');
}

int string_character_greater(char* string, int first,
  int second)
{
  char character=string_index_character(string, first);
  return character > string_index_character(string,
    second);
}

char* reverse_character_string(char* string,int length)
{
  char* reverse = generate_character_string(length);
  for(int index = 0; index < length; index = index + 1)
  {
    char character = string_index_character(string,
      length - (index + 1));
    reverse = add_string_character(reverse, index,
      character);
  }
  return reverse;
}
