#include<stdio.h>
int main()
{
   /* int n;
    printf("enter the num :");
    scanf("%d",&n);*/
    for (int i = 1; i <= 9; i++)
    {
        /* code */
        for ( int j = 1; j <= 9; j++)
        {
            if ( j>=i&&j<=6+4-i )
            {
                printf("*");
            }
            else
            {
                 printf(" ");
            }      
        }
        printf("\n");
    }
    
}