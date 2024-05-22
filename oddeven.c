#include<stdio.h>
int main()
{
    int a , b ;
    printf("enter the num a");
    scanf("%d", &a);
    switch (a%2 == 0)
    {
        case 0 :
         printf("odd") ;
        break;

         case 1 :
        printf("even") ;
        break;
    
        default:
        printf("not correct");
        break;
    }
}