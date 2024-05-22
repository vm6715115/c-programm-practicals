#include<stdio.h>
int main()
{
    int i , j , arr[3][3] ,brr[3][3] , crr[3][3] ;
    printf("enter the first mat num :\n");
    for (  i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            /* code */
             printf("arr[%d][%d] = ",i ,j );
             scanf("%d",&arr[i][j]);
        }   
    }
      for (  i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            /* code */
             crr[i][j] = arr[j][i];
        }
    }
    
    printf("print the first mat num :\n");
    for (  i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            /* code */
              printf(" %d",arr[i][j]);
        }  
         printf("\n");    
    }
     
    printf("print the symmetric mat num :\n");
    for (  i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            /* code */
              printf(" %d",crr[i][j]);
        }  
         printf("\n");    
    }
    if (arr[3][3] == crr[3][3])
    {
        /* code */
        printf("\nsymmetric");
    }
    else
    {
        /* code */
        printf("\nnot ssymmetric");
    }
    


}