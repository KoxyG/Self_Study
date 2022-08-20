/*Pointer to structure */

#include <stdio.h>
#include <stdlib.h>

struct rectangle
{
    int length;
    int breadth;
};

int main() 
{
    struct rectangle *p = {10, 15};
    p = malloc(sizeof(struct rectangle));
    p->length=20;
    p->breadth=30;
    
    printf("%d\n", p->length);
    printf("%d\n", p->breadth);

    return 0;
}
