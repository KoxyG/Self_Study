/* Measuring the length of a string */
#include <stdio.h>
#include <string.h>

int main()
{
  char str1[] = {'A', ' ', 'S', 'T', 'R', 'i', 'N', 'G'};
  char str2[] = {"Another string constant"};
  
  char *ptr_str; /*assign a string to a pointer*/
  
  printf("%ld\n", strlen(str1));
  printf("%ld\n", strlen(str2));
  printf("%d", strlen(ptr_str));
  
    return 0;
}
