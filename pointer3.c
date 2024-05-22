#include<stdio.h>
int main()
{
    int a;
    int *ptr;
    ptr = &a;
    a = 10;
    printf("%p%p\n",&a , ptr);
    printf("%5d%5d\n",a ,*ptr);
    *ptr = 20;
    printf("%u%u\n",&a , ptr);
    printf("%5d%5d",a ,*ptr);
}