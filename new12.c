#include<stdio.h>
int main()
{
        
    int arr1[40], arr2[40], sum[50], n;
    printf("how many element you want enter");
    scanf("%d" , &n);
    printf("please enter %d element one by one : ", n);
    for ( int  i = 0; i < n; i++)
    {
        /* code */
        scanf("%d\n" , &arr1[i]);
    }
    printf("please enter %d element one by one : ", n);
     for ( int  j = 0; j < n; j++)
    {
        /* code */
        scanf("%d\n" , &arr2[j]);
    }
    printf("add first and second \n : ");
    for ( int  k = 0; k < n; k++)
    {
        /* code */
        sum[k] = arr1[k] + arr2[k];
        printf("%d\n" , sum[k]);
    }
    
}