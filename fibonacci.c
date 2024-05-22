#include<stdio.h>
int main()
{
    int t1  = 0, t2 = 1 ,i ;
    int n ,nextterm = t1 + t2;
    printf("enter the last num n : ");
    scanf("%d", &n);
    printf("%d\n%d\n", t1 , t2);

    for ( i = 3; i <= n; ++i)
    {
        printf("%d\n",nextterm);
        t1 = t2 ;
        t2 = nextterm ;
        nextterm = t1 + t2;
    }
    
}
