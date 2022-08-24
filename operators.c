/* A step by step evaluation of 3 * x / y - z + r */

#include <stdio.h>

int main()
{
  int x,y,z,r;
  x = 2, y = 3, z = 3, r = 1;

  int result = 3 * x / y - z + r;

  printf("The value of the result is %d", result);

  return (0);
  
}
