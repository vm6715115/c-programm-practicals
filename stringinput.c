#include<stdio.h>
int main()
{
    char name[20];
    printf("enter name");
    scanf("%s", &name);
    printf("your name %s", sizeof(name));
    return 0;
}