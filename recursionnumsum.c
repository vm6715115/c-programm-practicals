#include<stdio.h>
int digitsum(int n);
int main()
{
    int num , sum;
    printf("enter the num :");
    scanf("%d",&num);
    sum = digitsum(num);
    printf("%d",sum);
   
}
int digitsum(int n)
{
    int s , rem;
    if ( n > 0)
    {
        rem = n% 10;
        s = rem + digitsum(n / 10);
    }
}