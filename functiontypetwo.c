//with argument and no return type
#include<stdio.h>
int fun(int a, int b);
int main()
{
    fun(10 , 20);
}
int fun(int a , int b)
{
    int c;
    c = a*b;
    printf("area = %d", c);
}