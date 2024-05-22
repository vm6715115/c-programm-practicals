//with argument and with return type
#include<stdio.h>
int fun(int a ,int b);
int main()
{
    int l , w ,p;
    printf("Please enter two num :");
    scanf("%d%d", &l , &w);
    p = fun(l ,w);// argument
    printf("area = %d", p);
    
}
int fun(int a, int b)
{
    
    int c = a*b;
    return c;// return type
}