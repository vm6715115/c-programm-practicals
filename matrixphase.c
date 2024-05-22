#include<stdio.h>
int main()
{
    int arr[3][3] , brr[3][3] , count = 0 ,i ,j;

    printf("enter the  num:\n");



    for ( int i = 0; i < 3; i++)
    {
        /* code */
        for ( int j = 0; j < 3; j++)
        {
            /* code */
            printf("arr[%d]%d]=",i,j);
            scanf("%d",&arr[i][j] );
            if ( arr[i][j] == 0)
            {
        /* code */
                count++;

            }  
            
        }
        // printf("\n");
        
    }
         
        printf("\nc = %d\n",count);
      
    
    

    
    
    for ( int i = 0; i < 3; i++)
    {
        /* code */
        for ( int j = 0; j < 3; j++)
        {
            /* code */
            printf(" %d ",arr[i][j] );
        }
        printf("\n");
        
    }


     if ( count > (3*3)/2)
    {
        /* code */
        printf("yes phase\n");
    }
    else
    {
        /* code */
        printf("no phase\n");
    }

   
    
    
    
}