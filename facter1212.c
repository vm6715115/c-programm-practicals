#include<stdio.h>
int main()
{
    int i , j ,k ;
    printf("enter the last num j :");
    scanf("%d", &j);
    for (  i = 1; i <= j; i++)
    {
         
         if ( j%i == 0)
         {
            
            printf("%d\n", i);
         }
        
    }
    
}