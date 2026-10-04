#include "collatz_conjecture.h"
#include <stdio.h>

int steps(int start) 
{
  int val = start;
  int stepcount = 0;
  if (val <= 0)
  {
    return ERROR_VALUE;
  }
  while (val != 1)
  {
    if (val % 2 == 0)
    {
      val = val / 2;
    }
    else if (val % 2 != 0)
    {
      val = val * 3 + 1;
    }
    ++stepcount;
  }
  return stepcount;
}
