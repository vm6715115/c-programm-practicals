#include<stdio.h>
int main()
{
    int a , n ,i;
    printf("enter the last num n : ");
    scanf("%d" , &n);
    for ( i = 1; i <= n; i++)
    {
        if ( n%i == 0  )
        {
           printf("%d\n", i) ;
        }
        
    }
}
