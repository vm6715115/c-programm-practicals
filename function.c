#include<stdio.h>
int area()
{
    float a, b , c;
    printf("Enter the two num: ");
    scanf("%f%f",&a,&b);
    c = a * b ;
    return c;
}
int main()
{
    int p;
    p = area();
    printf("area = %d", p);
}