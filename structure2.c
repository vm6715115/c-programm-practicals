#include<stdio.h>
#include<string.h>
struct employee
{
    /* data */
    int id;
    char name[50];
}e1;
int main()
{
    e1.id = 101;
    strcpy(e1.name,"varshit gupta");
    printf("employee 1id :%d\n",e1.id);
    printf("employee 1name :%s\n",e1.name);

}