#include<stdio.h>
void fun( int *a, int *b );
int main()
{
    int a ,b;
    printf("enter the num before swap a , b :");
    scanf("%d%d",&a , &b);
   /* a = a + b;
    b = a - b;
    a = a - b;*/
    fun(&a , &b);
     printf(" the num after swap is a = %d b = %d:", a , b);
}
void fun( int *a, int *b )
{

    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
     printf(" the num after swap is a = %d b = %d:", *a , *b);

}