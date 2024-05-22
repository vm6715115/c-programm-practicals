#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char fun[50] = "hey friend";
   // clrscr();
    printf("original string : %s\n", fun);
    strrev(fun);
    printf("after reverse : %s", fun);
    getch();
}