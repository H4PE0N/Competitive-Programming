
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-9/\
library-functions-program-9.h"

char** generate_string_sentence(int height, int width)
{
  char** sentence = malloc(sizeof(*sentence) * height);
  for(int index = 0; index < height; index = index + 1)
  {
    *(sentence + index) = generate_character_string(
      width);
  }
  return sentence;
}

char* sentence_index_string(char** sentence, int index)
{
  char* string = *(sentence + index); return string;
}

int compare_string_sentences(char**first, char**second,
  int height, int width)
{
  for(int index = 0; index < height; index = index + 1)
  {
    char* f_string=sentence_index_string(first, index);
    char* s_string=sentence_index_string(second,index);
    if(!compare_character_strings(f_string, s_string,
      width)) return false;
  }
  return true;
}

char** generate_random_sentence(int height, int width,
  int minimum, int maximum)
{
  char** sentence = generate_string_sentence(height,
    width);
  for(int index = 0; index < height; index = index + 1)
  {
    *(sentence + index) = generate_random_string(width,
      minimum, maximum);
  }
  return sentence;
}

void string_sentence_stdout(char** sentence, int height,
  int width)
{
  for(int index = 0; index < height; index = index + 1)
  {
    char* string=sentence_index_string(sentence,index);
    character_string_stdout(string, width);
  }
}

char** allocate_sentence_character(char** sentence,
  int height, int width, char character)
{
  char* string=sentence_index_string(sentence, height);
  *(sentence + height) = allocate_string_character(
    string, width, character);
  return sentence;
}

char** delete_sentence_character(char** sentence,
  int height, int width, int index)
{
  char* string=sentence_index_string(sentence, height);
  *(sentence + height) =delete_string_character(string,
    width, index);
  return sentence;
}
