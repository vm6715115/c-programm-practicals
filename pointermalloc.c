#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n , i , *ptr ,sum = 0;

    printf("enter the element :");
    scanf("%d",&n);

    ptr = (int*)malloc(n*sizeof(int));

    if(ptr == NULL)
 {
     printf("error");
     exit(0);
 }

 printf("enter element");
 for (  i = 0; i < n; i++)
 {
    scanf("%d",ptr + i);
    sum += *(ptr + i);
 }
 printf("sum = %d",sum);
 free(ptr);
 return 0;
    
}