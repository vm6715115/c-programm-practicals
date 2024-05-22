#include<stdio.h>
int main()
{
    int mata[3][3], matb[3][3] ,matc[3][3];
    int i , j;
    printf("enter the array one by one:\n");
    for (  i = 0; i < 3; i++)
    {
        for (  j = 0; j < 3; j++)
        {
            printf("array [%d][%d] = ", i , j);
            scanf("%d",&mata[i][j]);
        }   
    }
    printf("matrix is :\n");
    for (  i = 0; i < 3; i++)
    {
        /* code */
        for (j = 0; j < 3; j++)
        {
            /* code */
            printf(" %d", mata[i][j]);
        }
        printf("\n");
        
    }

    printf("enter the array one by one:\n");
    for (  i = 0; i < 3; i++)
    {
        for (  j = 0; j < 3; j++)
        {
            printf("array [%d][%d] = ", i , j);
            scanf("%d",&matb[i][j]);
        }   
    }
    printf("matrix is :\n");
    for (  i = 0; i < 3; i++)
    {
        /* code */
        for (j = 0; j < 3; j++)
        {
            /* code */
            printf(" %d", matb[i][j]);
        }
        printf("\n");
        
    }
    printf("add matrix is :\n");
    for (  i = 0; i < 3; i++)
    {
        /* code */
        for (j = 0; j < 3; j++)
        {
            /* code */
            matc[i][j] = mata[i][j] + matb[i][j];
            printf(" %d", matc[i][j]);
        }
        printf("\n");
        
    }
    
    
}