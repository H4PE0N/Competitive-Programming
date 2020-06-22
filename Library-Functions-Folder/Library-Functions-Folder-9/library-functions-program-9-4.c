
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-9/\
library-functions-program-9.h"

int sentence_character_smaller(char** sentence,
  int first, int second, int index)
{
  char character = string_sentence_character(sentence,
    first, index);
  return character <string_sentence_character(sentence,
    second, index);
}

int sentence_character_greater(char** sentence,
  int first, int second, int index)
{
  char character = string_sentence_character(sentence,
    first, index);
  return character >string_sentence_character(sentence,
    second, index);
}

int sentence_string_smaller(char** sentence,int height,
  int first, int second)
{
  sentence = sort_sentence_strings(sentence, height);
  int width = sentence_string_length(sentence, 0);
  for(int index = 0; index < width; index = index + 1)
  {
    if(sentence_character_greater(sentence, first,
      second, index)) return false;
    if(sentence_character_smaller(sentence, first,
      second, index)) return true;
  }
  return false;
}

int sentence_string_greater(char** sentence,int height,
  int first, int second)
{
  sentence = sort_sentence_strings(sentence, height);
  int width = sentence_string_length(sentence, 0);
  for(int index = 0; index < width; index = index + 1)
  {
    if(sentence_character_smaller(sentence, first,
      second, index)) return false;
    if(sentence_character_greater(sentence, first,
      second, index)) return true;
  }
  return false;
}

char** shuffle_string_sentence(char** sentence,
  int height)
{
  for(int index = 0; index < height; index = index + 1)
  {
    int random = generate_random_integer(0,height - 1);
    sentence = switch_sentence_strings(sentence, index,
      random);
  }
  return sentence;
}

char** reverse_string_sentence(char** sentence,
  int height, int width)
{
  char** reverse = generate_string_sentence(height,
    width);
  for(int index = 0; index < height; index = index + 1)
  {
    *(reverse + index) =sentence_index_string(sentence,
      height - (index + 1));
  }
  return reverse;
}

char** reverse_sentence_strings(char** sentence,
  int height, int width)
{
  for(int index = 0; index < height; index = index + 1)
  {
    char* string=sentence_index_string(sentence,index);
    *(sentence +index)=reverse_character_string(string,
      width);
  }
  return sentence;
}
