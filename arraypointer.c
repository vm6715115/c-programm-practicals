#include<stdio.h>
int main()
{
    int x[4];
    int i;
    for (  i = 0; i < 4; i++)
    {
        /* code */
        printf("&x [%d] = %p\n",i , &x[i]);
    }
    printf("adderss of arry x : %p",x);

    return 0;
    
}