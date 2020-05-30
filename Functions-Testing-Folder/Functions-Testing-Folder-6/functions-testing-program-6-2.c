
#include "../../Competitive-Program-Folder/\
Competitive-Functions-Folder-1/\
competitive-functions-program-1.h"

#include "../../Competitive-Program-Folder/\
Competitive-Functions-Folder-2/\
competitive-functions-program-2.h"

#include "../../Competitive-Program-Folder/\
Competitive-Functions-Folder-3/\
competitive-functions-program-3.h"

#include "../../Competitive-Program-Folder/\
Competitive-Functions-Folder-6/\
competitive-functions-program-6.h"

#include "../Competitive-Functions-Testing-6/\
competitive-functions-testing-6.h"

int array_integer_percent_test(int* array, int length,
  int integer, double i_percent)
{
  double percent = array_integer_percent(array,length,
    integer);
  return (percent == i_percent);
}
