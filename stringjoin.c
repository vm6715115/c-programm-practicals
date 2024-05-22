#include<stdio.h>
#include<string.h>
int main()
{
    char fun[30] ,run[30];
    printf("enter the char :");
    gets(fun);
    printf("next enter the char :");
    gets(run);

    strcat(fun ,run);

    printf("%s",fun);

}