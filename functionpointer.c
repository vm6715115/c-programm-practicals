//add pointer
#include<stdio.h>
void sum(int a , int *b);
int main()
{
    int x, y;
    printf("enter two num :");
    scanf("%d%d", &x ,&y);
    sum(x ,&y);
    printf("after sum");
    printf("x = %d y = %d", x , y);
}
void sum(int a ,int *b)
{
    //int a , *b;
    a += 2;//copy
    *b += 2;//store
}