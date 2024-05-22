#include<stdio.h>
int main()
{
    int i, j , k = 1;
    printf("enter the num j :");
    scanf("%d", &j);
    for (  i = 1; i <= j; i++)
    {
       k = k * i; 
    }
    printf("factorial %d", k);
    
}