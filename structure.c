#include<stdio.h>
#include<string.h>
struct employee
{
    /* data */
    int id;
    char name[50];
}e1,e2;
int main()
{
    e1.id = 101;
    e2.id = 102;
    strcpy(e1.name,"varshit gupta");
     strcpy(e2.name,"vishal maurya");
    printf("employee 1id :%d\n",e1.id);
    printf("employee 1name :%s\n",e1.name);

    printf("employee 2id :%d\n",e2.id);
    printf("employee 2name :%s\n",e2.name);

}
