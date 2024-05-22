#include<stdio.h>
int main()
{
    /* this program not clear*/
    int  a , n ,sum = 0;
    printf(" how many element you want to enter");
    scanf("%d" ,&n);
    printf("plese enter %d element one by one : ",  n);
    for ( int  i = 0; i < n; i++)
    {
        scanf("%d\n", &a);
        sum = sum + a;

    }
    printf("total sum :%d", sum);
    
}