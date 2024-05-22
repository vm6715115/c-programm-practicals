#include<stdio.h>
#include<string.h>
int main()
{
    char fun[10] = "hello";
    char run[10];

    puts(fun);
    printf("fun = %s\n",fun);
    strcpy(run , fun);

    printf("run = %s\n",run);
    strcpy(run , "world");
    printf("run = %s\n",run);

}