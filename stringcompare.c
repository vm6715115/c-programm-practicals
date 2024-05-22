#include<stdio.h>
#include<string.h>
void main()
{
    char fun[50];
    int s;
    printf("enter the pass");
    gets(fun);
    s = strcmp(fun , "1234");
    if ( s == 0)
    {
        /* code */
        printf("yes");
    }
    else
    {
        /* code */
        printf("no");
    }
    
    

}