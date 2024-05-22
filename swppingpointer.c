//pass by address
#include<stdio.h>
void swap(int *a, int *b);
int main()
{
    int x , y;
    printf("enter two num before swap: ");
    scanf("%d%d", &x , &y);
    swap(&x , &y);
    printf("%d\t%d",x , y);
    


}
void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
     printf("two num after swap:");
    printf("x=%dy=%d", *a, *b);
}