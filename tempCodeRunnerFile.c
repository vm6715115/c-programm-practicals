//one error
#include<stdio.h>
#include<string.h>
int main()
{
    char fun[56] = "hello world";
    char run[5] ;
    printf("%s\n", fun);
    strncpy(run , fun, 3);
    printf("%s \n ", run);
    printf("%lu", sizeof run);
}