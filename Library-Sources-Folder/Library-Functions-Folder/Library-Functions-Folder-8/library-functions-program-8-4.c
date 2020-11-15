
#include "../library-functions-headers.h"

char generate_random_character(int minimum,int maximum)
{
  char character = generate_random_integer(minimum,
    maximum); return character;
}

int character_variable_greater(char first, char second)
{
  int boolean = (first > second); return boolean;
}

int character_range_between(char character,int minimum,
  int maximum)
{
  int smaller = !character_variable_smaller(character,
    minimum);
  int greater = !character_variable_greater(character,
    maximum); return (smaller && greater);
}
