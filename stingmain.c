#include<stdio.h>
#include<string.h>
int main()
{
    char name[30];
    printf("enter name : ");
    fgets(name , sizeof(name),stdin);
    printf("name : ");
    puts(name);
    return 0;
}