#include<stdio.h>
int main()

{
    int num[5], total = 0 ,avg;
    int  i;
    printf("enter element of the array\n");

    for ( i = 0; i < 5; i++)
    {
        printf("enter the value of num -");
        scanf("%d",&num[i]);
    }
    for (i = 0; i < 5; i++)
    {
         total = total + num[i];
    }
    printf("%d\n",total);
    avg = total/5;
    printf("%d",avg);
    
}