//pass by value
#include<stdio.h>
void swap(int a ,int b);
int main()
{
    int c , d;
    printf("enter the two num");
    scanf("%d%d",&c ,&d);
     swap(c , d);

}
void swap(int a, int b)
{
    //int a , b ;
    //printf("enter the two num");
    //scanf("%d%d",&a ,&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("after swapp");
    printf("a= %d b=%d",a , b);
}