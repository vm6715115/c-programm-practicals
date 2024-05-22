#include<stdio.h>
int main()
{
    int a , b , max ;
    printf("enter two num a b :");
    scanf("%d %d", &a ,&b);
    if ( a==b)
    {
        /* code */
        printf("both equal");
    }
    max = (a>b)?a:b;
    printf("%d", max);
}