
#include "../library-functions-headers.h"

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
      character_string_length(string),character);break;
  }
  return sentence;
}

char string_sentence_character(char** sentence,
  int height, int width)
{
  char* string=sentence_index_string(sentence, height);
  char character=string_index_character(string, width);
  return character;
}

char** sort_sentence_strings(char**sentence,int height)
{
  for(int index = 0; index < height; index = index + 1)
  {
    char* string=sentence_index_string(sentence,index);
    *(sentence + index) = sort_character_string(string,
      sentence_string_length(sentence, index));
  }
  return sentence;
}

char** shuffle_sentence_strings(char** sentence,
  int height)
{
  for(int index = 0; index < height; index = index + 1)
  {
    char* string=sentence_index_string(sentence,index);
    *(sentence + index) = shuffle_character_string(
      string, sentence_string_length(sentence, index));
  }
  return sentence;
}

int compare_sentence_content(char**first, char**second,
  int height, int width)
{
  first = sort_string_sentence(first, height);
  return compare_string_sentence(first,
    sort_string_sentence(second, height),height,width);
}

char** sort_string_sentence(char** sentence,int height)
{
  for(int index = height; index >= 0; index =index - 1)
  {
    sentence = sort_sentence_iteration(sentence,height,
      index);
  }
  return sentence;
}

char** sort_sentence_iteration(char** sentence,
  int height, int iteration)
{
  for(int index = 0; index < (iteration - 1); index++)
  {
    if(sentence_string_smaller(sentence, height, index,
      index + 1)) continue;
    sentence = switch_adjacent_strings(sentence,index);
  }
  return sentence;
}
