
/* A collection of competitive functions*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

#include "../Competitive-Function-Program-1/\
competitive-function-program-1.h"

int** generate_integer_hashlist(const int length)
{
  return generate_matrix_array(length, 2);
}

int calculate_integer_amount(int* array, int* info)
{
  int number = *(info + 0), amount = 0;
  for(int index = 0; index < *(info + 1); index++)
  {
    if(*(array + index) == number){ amount += 1; }
  }
  return amount;
}

int calculate_hashvalue_index(int** list, int value)
{
  int index = 0; while(*(*(list + index) + 1) != 0)
  {
    if(*(*(list + index)) == value)
    { return index; } index = (index + 1);
  }
  return -1;
}

int calculate_hashlist_length(int** hashlist)
{
  int index = 0; while(*(*(hashlist + index) + 1) != 0)
  { index++; } return index;
}

int hashlist_value_exists(int** hashlist, int value)
{
  int index = 0; while(*(*(hashlist + index) + 1) != 0)
  {
    if(*(*(hashlist + index)) == value){return true;}
    index++;
  }
  return false;
}

int** increment_hashlist_value(int** list, int value)
{
  int index = calculate_hashvalue_index(list, value);
  *(*(list + index) + 1) += 1; return list;
}

int** generate_hashlist_value(int** list, int value)
{
  int length = calculate_hashlist_length(list);
  *(*(list + length) + 0) = value;
  *(*(list + length) + 1) = 1; return list;
}

int** allocate_hashlist_value(int** list, int value)
{
  if(!hashlist_value_exists(list, value))
  {
    list = generate_hashlist_value(list, value);
  } else {
    list = increment_hashlist_value(list, value);
  }
  return list;
}

int** allocate_array_hashlist(int* array, int length)
{
  int** hashlist = generate_integer_hashlist(length);
  for(int index = 0; index < length; index++)
  {
    hashlist = allocate_hashlist_value(
      hashlist, *(array + index));
  }
  return hashlist;
}

/* Made by Roy Hampus Fridholm - 2020/04/17 */
