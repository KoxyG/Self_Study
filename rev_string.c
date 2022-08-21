#include <stdio.h>
void *str_rev(char *str);
int main()
{
    str_rev("abcdefghijklmnopqrst");
}

void *str_rev(char *str)
{

    int i, j, k = 0;
    for (i = 0; str[i] != '\0'; i++)
        ;
    i -= 1;

    char rev[222]; /*Declaring char array constant with random number */
    for(j = 0; j <= i; j++)
    {
        rev[j] = str[i-j];
    }
    rev[j] = '\0';
    printf("%s", rev);

}
