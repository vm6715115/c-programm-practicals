#include<stdio.h>
int area(int l ,int w);
int main()
{
    int a = 10 , b= 10 , c;
    c = area(a , b);
    printf("area = %d", c);
}
int area(int l, int w)
{
    int a;
    a = l*w;
    return a;
}