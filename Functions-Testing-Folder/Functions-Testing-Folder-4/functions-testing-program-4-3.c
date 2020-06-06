
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

int generate_lower_alphabet_test(int characters,
  char* i_alphabet)
{
  char* alphabet = generate_lower_alphabet(characters);
  return compare_strings_together(alphabet, i_alphabet,
    characters);
}

int generate_higher_alphabet_test(int characters,
  char* i_alphabet)
{
  char* alphabet =generate_higher_alphabet(characters);
  return compare_strings_together(alphabet, i_alphabet,
    characters);
}

int lower_alphabet_character_test(int index,
  char i_character)
{
  char character = lower_alphabet_character(index);
  return (character == i_character);
}

int higher_alphabet_character_test(int index,
  char i_character)
{
  char character = higher_alphabet_character(index);
  return (character == i_character);
}
