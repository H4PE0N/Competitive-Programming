
#include "../library-functions-headers.h"

int greatest_common_multiple(int greater, int smaller)
{
  for(int index = smaller; index > 0;index = index - 1)
  {
    int g_bool=check_integer_divisible(greater, index);
    int s_bool=check_integer_divisible(smaller, index);
    if(g_bool && s_bool) return index;
  }
  return false;
}

int smallest_common_multiple(int greater, int smaller)
{
  int multiple = greater;
  while( (multiple % greater) || (multiple % smaller) )
  {
    multiple = increase_integer_variable(multiple, 1);
  }
  return multiple;
}
