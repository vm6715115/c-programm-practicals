#include<stdio.h>
void funA();
void funB();
void funC();
void funD();
int main()
{
    printf("hey from main function\n");
    funA();
    printf("bye from main function\n");
}
void funA()
{
    printf("hey from function a\n");
    funB();
    printf("bye from function a\n");
}
void funB()
{
    printf("hey from function b\n");
    funC();
    printf("bye from function b\n");
}
void funC()
{
    printf("hey from function c\n");
    funD();
    printf("bey from function c\n");
}
void funD()
{
    printf("hey from function d\n");
    printf("bey from function d\n");
}