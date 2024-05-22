//no argument and with return type
#include<stdio.h>
int fun();
int main()
{
   int p;
   p = fun();
   printf("%d", p);
}
int fun()
{
    int a , b , c;
    a = 12;
    b = 12;
    c = a*b;
    return c;
}