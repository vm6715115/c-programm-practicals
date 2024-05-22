#include<stdio.h>
int fun();//function decleration
int main()
{
    printf("hey from main function :\n");
    fun();
    printf("bye from main function :\n");

}
int fun()
{
    printf("hey from fun :\n");
    return 1;
    printf("bye from fun :\n");
}