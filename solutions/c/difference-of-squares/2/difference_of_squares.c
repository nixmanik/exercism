#include "difference_of_squares.h"

unsigned long long sum_of_squares(unsigned int number)
{
  unsigned long long total = 0;
  for (unsigned int i = 1; i <= number; i++) {
    total += (unsigned long long)i * i;
  }
  return total;
}

unsigned long long square_of_sum(unsigned int number)
{
  unsigned long long total = 0;
  for (unsigned int i = 1; i <= number; i++) {
    total += i;
  }
  return total * total;
}

unsigned long long difference_of_squares(unsigned int number)
{
  return square_of_sum(number) - sum_of_squares(number);
}
