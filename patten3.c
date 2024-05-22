#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the num :");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        /* code */
        for (j = n; j >= i; j--)
        {
            /* code */
            printf("*");
        }
        printf("\n");
    }
    
}
