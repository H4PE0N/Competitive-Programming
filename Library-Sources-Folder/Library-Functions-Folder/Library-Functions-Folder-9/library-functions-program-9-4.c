
#include "../library-functions-headers.h"

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

char** reverse_string_sentence(char** sentence,
  int height, int width)
{
  char** reverse = generate_string_sentence(height,
    width);
  for(int index = 0; index < height; index = index + 1)
  {
    char* string = sentence_index_string(sentence,
      height - (index + 1));
    reverse=add_sentence_string(reverse, index,string);
  }
  return reverse;
}

int sentence_string_index(char** sentence, int height,
  char* string)
{
  int string_index = height;
  for(int index = (height - 1); index >= 0; index -= 1)
  {
    char* index_string=sentence_index_string(sentence,
      index);
    int length=sentence_string_length(sentence, index);
    if(compare_character_strings(string, index_string,
      length)) { string_index = index; break; }
  }
  return string_index;
}

char** insert_sentence_characters(char** sentence,
  int* first, int* second, char character)
{
  for(int index = first[1]; index <= second[1];index++)
  {
    char* string=sentence_index_string(sentence,index);
    string = insert_string_characters(string, first[0],
      second[0], character);
    sentence = allocate_sentence_string(sentence,index,
      string);
  }
  return sentence;
}
