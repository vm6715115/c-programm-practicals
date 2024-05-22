#include<stdio.h>
int main()
{
    int i , count = 0 ;
    printf("enter the num i :");
    scanf("%d", &i);
    while ( i != 0)
    {
        /* code */
        i = i/10 ;
        count++;
    }
    printf("%d", count);
    
}
