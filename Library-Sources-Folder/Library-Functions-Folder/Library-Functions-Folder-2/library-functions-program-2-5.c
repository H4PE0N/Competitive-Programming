
#include "../library-functions-headers.h"

char** convert_matrix_sentence(int** matrix,int height,
  int width)
{
  char** sentence = generate_string_sentence(height,
    width);
  for(int index = 0; index < height; index = index + 1)
  {
    int* array = matrix_index_array(matrix, index);
    char* string = convert_array_string(array, width);
    sentence = append_sentence_string(sentence, index,
      string);
  }
  return sentence;
}
