#include<stdio.h>
int main()
{
    int i , j , k , num[5] ,n = 5 ;
    printf("enter the element :");
    for (  i = 0; i < 5; i++)
    {
        /* code */
        scanf("%d",&num[i]);
    }
     for (  i = 0; i < 5; i++)
    {
        /* code */
         printf("num[%d] = %d\n",i ,num[i]);
    }
    for (  i = 0; i < n; i++)
    {
        /* code */
        for (  j = 0; j < n; j++)
        {
            /* code */
            if (num[i]<num[j])
            {
                /* code */
                k = num[i];
                num[i]=num[j];
                num[j] = k;
            }
            
        }
        
    }
    printf("increasing order :");
    for (  i = 0; i < 5; i++)
    {
        /* code */
        printf("%d ",num[i]);
    }
    
    

     
    
}