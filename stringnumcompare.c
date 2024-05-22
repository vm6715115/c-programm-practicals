#include<stdio.h>
#include<string.h>
int main()
{
    char fun[55] = "varshit gupta";//dout
    char run[55] = "VARSHIT GUPTA";//dout
    int i ;
    i = strcmp(fun , run);
    if ( i == 0)
    {
        /* code */
        printf("yes");
    }
    else
    {
         printf("no");
    }
    
    
}