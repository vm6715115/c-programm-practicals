#include<stdio.h>
void addone(int *ptr)
{
    (*ptr)++;                   
}
int main()
{
    int *p , i = 10;
    p = &i;
    addone(p);

    printf("%d", *p);
    return 0;
}