//functio with rec
#include<stdio.h>
int fun(int n, int i);
int main()
{
    int a, b, i=1;
    printf("enter the num");
    scanf("%d", &b);
    a = fun(b, i);
    printf("%d", a);

}
int fun(int n,int i)
{
    
    if ( i < n)
    {
        printf("%d \t", i) ; 
        return fun(n, i+1 );
    }
    else
    {
         return n;
    }  
}