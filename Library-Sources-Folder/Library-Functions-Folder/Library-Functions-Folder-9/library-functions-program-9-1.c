
#include "../library-functions-headers.h"

char** generate_string_sentence(int height, int width)
{
  char** sentence = malloc(sizeof(*sentence) *
    (height + 1));
  for(int index = 0; index <= height; index =index + 1)
  {
    sentence = add_sentence_string(sentence, index,
      generate_character_string(width));
  }
  return sentence;
}

char* sentence_index_string(char** sentence, int index)
{
  char* string = *(sentence + index); return string;
}

int compare_string_sentence(char** first,char** second,
  int height, int width)
{
  for(int index = 0; index <= height; index = index + 1)
  {
    char* f_string=sentence_index_string(first, index);
    char* s_string=sentence_index_string(second,index);
    if(!compare_character_strings(f_string, s_string,
      width)) return false;
  }
  return true;
}

char** allocate_sentence_character(char** sentence,
  int height, int width, char character)
{
  char* string=sentence_index_string(sentence, height);
  *(sentence + height) = allocate_string_character(
    string, width, character); return sentence;
}

char** switch_sentence_strings(char** sentence,
  int first, int second)
{
  char* switch_string = sentence_index_string(sentence,
    first);
  *(sentence + first) = sentence_index_string(sentence,
    second);
  sentence = allocate_sentence_string(sentence, second,
    switch_string); return sentence;
}

char** allocate_sentence_string(char** sentence,
  int index, char* string)
{
  *(sentence + index) = string; return sentence;
}

char** move_sentence_strings(char**sentence,int height,
  int start)
{
  for(int index = start; index < height; index += 1)
  {
    sentence = switch_adjacent_strings(sentence,index);
  }
  return sentence;
}

char** switch_adjacent_strings(char** sentence,
  int index)
{
  return switch_sentence_strings(sentence, index,
    index + 1);
}

int string_sentence_height(char** sentence, int width)
{
  int height = 0;
  while(sentence_string_length(sentence, height) >=
    width)
  {
    height = increase_integer_variable(height, 1);
  }
  return height;
}
