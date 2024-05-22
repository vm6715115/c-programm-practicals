#include<stdio.h>
int main()
{
    int a , n , c;
    printf("enter the last num n : ");
    scanf("%d" , &n);
    printf("enter the num dived not print : ");
    scanf("%d" , &a);

    for ( int  i = 0; i <= n; i++)
    {
        if ( i%a != 0 )
        {
            printf("%d\n" , i);
        }
        
       // printf("%d\n" , i);
    }
    
}