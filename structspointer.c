#include<stdio.h>
struct  person
{
    /* data */
    int age ;
    float weight;
};
int main()
{
    struct person *personptr , person;
    personptr = &person;
    printf("person age :");
    scanf("%d",&personptr->age);
    printf("person weight");
    scanf("%f",&personptr->weight);
    printf("desplaying\n");
    printf("age %d\n",personptr->age);
    printf("weight %f",personptr->weight);
}
