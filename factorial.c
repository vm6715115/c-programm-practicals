#include<stdio.h>
int main()
{
    int a , n , fact = 1;
    printf("enter the last num n : ");
    scanf("%d" , &n);
    for ( int i = 1; i <= n; i++)
    {
        /* code */
         fact = fact*i;
    }
     printf("%d\n", fact);

}