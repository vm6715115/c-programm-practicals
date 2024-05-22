#include<stdio.h>
int main()
{
    int avg , sum = 0 ;
    int i ;
    int marks[5];
    for (  i = 0; i < 5; i++)
    {
        /* code */
        printf("Enter marks");
        scanf("%d", &marks[i]);
    }
    for (  i = 0; i < 5; i++)
    sum = sum + marks[i];
    avg = sum/5;
    printf("avg marks : %d" , avg);

}