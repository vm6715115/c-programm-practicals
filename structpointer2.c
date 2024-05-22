#include<stdio.h>
#include<string.h>
struct  idcard
{
    /* data */
    char name[50];
    int rollnum;
    char sub[20];
    char  branch[20];
};
int main()
{
    struct idcard *d1 ,t1 , *d2 , t2 ;
    d1 = &t1;
     d2 = &t2;
    printf("first person data\n");
    printf("enter name\n");
    scanf("%s",&d1->name);
     printf("enter rnum\n");
    scanf("%d",&d1->rollnum);
     printf("enter sub\n");
    scanf("%s",&d1->sub);
    printf("enter branch\n");
    scanf("%s",&d1->branch);

    printf("second person data\n");
    printf("enter name\n");
    scanf("%s",&d2->name);
     printf("enter rnum\n");
    scanf("%d",&d2->rollnum);
     printf("enter sub\n");
    scanf("%s",&d2->sub);
     printf("enter branch\n");
    scanf("%s",&d2->branch);

    printf("desplaying\n");

    printf("first person data\n");
    printf("enter name = %s\n",d1->name);
     printf("enter rnum %d\n",d1->rollnum);
     printf("enter sub = %s\n",d1->sub);
    printf("enter branch = %s\n",d1->branch);

     printf("second person data\n");
    printf("enter name = %s\n",d2->name);
     printf("enter rnum %d\n",d2->rollnum);
     printf("enter sub = %s\n",d2->sub);
     printf("enter branch = %s\n",d2->branch);
    

}