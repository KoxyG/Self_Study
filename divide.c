/* A program that checks whether a number is divisible by 97 or not */

#include <stdio.h>
#include <math.h>

int main()
{
  int x;
  
  printf("Enter a number: ");
  scanf("%d", &x);
  
  //finding if a given number is divisible by 4 or not
  if (!(x % 97))
  {
  printf("Yes");
  }
  else
  {
      printf("no");
  }
  return 0;
}
