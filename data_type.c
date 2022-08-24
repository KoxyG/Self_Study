/* checking the return data type of 3.0/8-2 */

#include <stdio.h>

int main()
{
  int x, y, z;
  x = 3.0, y = 8, z = 2;

  int result = 3.0 / 8 - 2;
  // (3.0 / 8) - 2
  //-1

  printf("The value of the result is %d", result);
  
  // it returns an int

  return (0);
  
}
