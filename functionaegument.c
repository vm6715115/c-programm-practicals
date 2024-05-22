#include<stdio.h>
int area(int a, int b);//function dec
int main()
{
    int p ;
    p = area(12 , 12);//argument
    printf("area = %d\n", p);
    p = area(11 , 11);//argument
    printf("area = %d", p);

}

int area(int a, int b) //function dif
{
    int c;
    c = a*b;
    return c;
    
}