
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

char** delete_sentence_character(char** sentence,
  int height, int width)
{
  char* string=sentence_index_string(sentence, height);
  int length = sentence_string_length(sentence, height);
  *(sentence + height) =delete_string_character(string,
    length, width); return sentence;
}

char** delete_sentence_string(char** sentence,
  int height, int index)
{
  sentence = move_sentence_strings(sentence, height,
    index);
  int length = sentence_string_length(sentence, 0);
  return allocate_sentence_string(sentence, height - 1,
    generate_character_string(length));
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

char** duplicate_string_sentence(char** sentence,
  int height, int width)
{
  char** doublet = generate_string_sentence(height,
    width);
  for(int index = 0; index < height; index = index + 1)
  {
    char* string=sentence_index_string(sentence,index);
    *(doublet + index) = duplicate_character_string(
      string, width);
  }
  return doublet;
}

char** remove_sentence_characters(char** sentence,
  int height, char character)
{
  for(int index = 0; index < height; index = index + 1)
  {
    char* string=sentence_index_string(sentence,index);
    int width = sentence_string_length(sentence,index);
    *(sentence + index) = remove_string_characters(
      string, width, character);
  }
  return sentence;
}

char** add_sentence_character(char** sentence,
  int height, char character)
{
  char* string=sentence_index_string(sentence, height);
  int length = sentence_string_length(sentence,height);
  *(sentence + height) = add_string_character(string,
    length, character); return sentence;
}

int sentence_string_contains(char** sentence,int index,
  char character)
{
  char* string = sentence_index_string(sentence,index);
  int length = sentence_string_length(sentence, index);
  return string_contains_character(string, length,
    character);
}

char** remove_sentence_character(char** sentence,
  int height, char character)
{
  for(int index = (height - 1); index >= 0; index -= 1)
  {
    if(!sentence_string_contains(sentence, index,
      character)) continue;
    char* string=sentence_index_string(sentence,index);
    sentence[index] = remove_string_character(string,
      calculate_string_length(string),character);break;
  }
  return sentence;
}

// shuffle_sentence_strings
//
// shuffle_string_sentence
//
// sort_string_sentence
//
// sort_sentence_strings
//
// sort_sentence_iteration
//
// sentence_string_character
//
// compare_sentence_content
