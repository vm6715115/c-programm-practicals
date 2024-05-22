#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i , n ,*ptr , sum = 0;

    printf("Enter the element:");
    scanf("%d", &n);

     ptr = (int*)calloc(n, sizeof(int));

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