#include<stdio.h>
#include<string.h>
struct  employee
{
    /* data */
    int id ;
    char name[50];
};
int main()
{
    struct employee e1;
    e1.id = 101;
    strcpy(e1.name,"varshit gupta");
    printf("%d\n",e1.id);
    printf("%s",e1.name);
}
