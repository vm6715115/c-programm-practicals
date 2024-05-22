#include<stdio.h>
int main()
{
    float a , b, c ;
    printf("enter the num a");
    scanf("%f", &a);
     printf("enter the num b");
    scanf("%f", &b);
    char ch;
    printf("enter a char + - * /");
    scanf("\n %c",&ch);
    switch (ch)
    {
        case  '+':
        printf("%f", a+b);
        break;

        case  '-':
        printf("%f", a-b);
        break;

        case  '*':
        printf("%f", a*b);
        break;

        case  '/':
        printf("%f", a/b);
        break;
    
    default:
        break;
    }
}