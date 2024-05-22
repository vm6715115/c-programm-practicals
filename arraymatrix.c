#include<stdio.h>
int main()
{
    int mat[3][3];
    int i , j ;
    printf("enter the array one by one:\n");
    for (  i = 0; i < 3; i++)
    {
        for (  j = 0; j < 3; j++)
        {
            printf("array [%d][%d] = ", i , j);
            scanf("%d",&mat[i][j]);
        }   
    }
    printf("matrix is :\n");
    for (  i = 0; i < 3; i++)
    {
        /* code */
        for (j = 0; j < 3; j++)
        {
            /* code */
            printf(" %d", mat[i][j]);
        }
        printf("\n");
        
    }
    
    
}