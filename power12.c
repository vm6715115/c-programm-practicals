#include<stdio.h>
int main()
{
    int i , j, k = 1, sum = 1;
    printf("Enter the num  i : ");
    scanf("%d", &i);
    printf("Enter the pow j : ");
    scanf("%d", &j);
    while ( k <= j)
    {
        /* code */
        sum = sum * i;
        k++;
    }
    printf(" ans = %d", sum);
}