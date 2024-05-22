#include<stdio.h>
int main()
{
    int i , j ,k , rem , rev = 0 ;
    printf("enter the num i : ");
    scanf("%d", &i);
    printf("the rev num is : ");
    /*j = i%10;
    printf("%d", j);
    j = i/10%10;
    printf("%d", j);
    j = i/100%10;
    printf("%d", j);
    j = i/1000;
    printf("%d", j);*/
    while ( i != 0)
    {
        /* code */
        rem = i%10 ;
        rev = rev*10 + rem;
        i = i/10 ; 
    }
    printf("%d", rev);
    
}