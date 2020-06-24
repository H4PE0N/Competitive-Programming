
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-9/\
library-functions-program-9.h"

int shuffle_sentence_strings_test(char** sentence,
  int height, char** output)
{
  sentence = shuffle_sentence_strings(sentence,height);
  int width = sentence_string_length(sentence, 0);
  int boolean = !compare_string_sentence(sentence,
    output, height, width);
  return boolean && compare_sentence_content(sentence,
    output, height, width);
}

int sentence_character_greater_test(char** sentence,
  int first, int second, int index, int output)
{
  int boolean = sentence_character_greater(sentence,
    first, second, index); return (boolean == output);
}

int sentence_character_smaller_test(char** sentence,
  int first, int second, int index, int output)
{
  int boolean = sentence_character_smaller(sentence,
    first, second, index); return (boolean == output);
}

int sentence_string_smaller_test(char** sentence,
  int height, int first, int second, int output)
{
  int boolean=sentence_string_smaller(sentence, height,
    first, second); return (boolean == output);
}

int sentence_string_greater_test(char** sentence,
  int height, int first, int second, int output)
{
  int boolean=sentence_string_greater(sentence, height,
    first, second); return (boolean == output);
}

int sort_string_sentence_test(char** sentence,
  int height, char** output)
{
  sentence = sort_string_sentence(sentence, height);
  return compare_string_sentence(sentence, output,
    height, sentence_string_length(sentence, 0));
}

int sort_sentence_iteration_test(char** sentence,
  int height, int iteration, char** output)
{
  sentence = sort_sentence_iteration(sentence, height,
    iteration);
  return compare_string_sentence(sentence, output,
    height, sentence_string_length(sentence, 0));
}

int compare_sentence_content_test(char** first,
  char** second, int height, int width, int output)
{
  int boolean = compare_sentence_content(first, second,
    height, width); return (boolean == output);
}

int shuffle_string_sentence_test(char** sentence,
  int height, char** output)
{
  int width = sentence_string_length(sentence, 0);
  sentence = shuffle_string_sentence(sentence, height);
  int boolean = !compare_string_sentence(sentence,
    output, height, width);
  return boolean && compare_sentence_content(sentence,
    output, height, width);
}

int reverse_string_sentence_test(char** sentence,
  int height, int width, char** output)
{
  sentence = reverse_string_sentence(sentence, height,
    width);
  return compare_string_sentence(sentence, output,
    height, width);
}
