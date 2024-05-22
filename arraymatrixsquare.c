#include<stdio.h>
int main()
{
     int mata[3][3], matb[3][3] ,matc[3][3];
    int i , j ,k;
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
    for (  i = 0; i < 3; i++)
    {
        /* code */
        for (j = 0; j < 3; j++)
        {
            /* code */ 
            matc[i][j] = 0;
            for (k = 0; k < 3; k++)
            {
                /* code */
               matc[i][j] =matc[i][j] + (mata[i][k] * mata[k][j]);
            }
        }
    }
    
    printf("square matrix is :\n");
    for (  i = 0; i < 3; i++)
    {
        /* code */
        for (j = 0; j < 3; j++)
        {
            /* code */
            printf(" %d", matc[i][j]);
        }
        printf("\n");
        
    }
}
    