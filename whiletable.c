#include<stdio.h>
int main()
{
    int i =1 , a;
    printf("enter the table num a");
    scanf("%d", &a);
    while (i<=10)
    {
        printf("%d\n", i*a);
        i++;
    }
    
}