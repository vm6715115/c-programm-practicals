#include<stdio.h>
int sqar(int n);
void add(int n);
void facto(int n);
void ams();
int main()
{
    int x , p;

    printf("1 = sqar\n");
    printf("2 = sum\n");
    printf("3 = fact\n");
    printf("4 = ams\n");
    
    printf("enter the num 1, 2 , 3 , 4 : \n");
    scanf("%d", &p);

    switch (p)
    {
        case 1:
        sqar( x);
        break;

        case 2:
        add(x);
        break;

        case 3:
         facto(x);
        break;

         case 4:
         ams(x);
        break;
    
        default:
        printf("input is invalid");
        break;
    }

}
int sqar(int n)
{
    int p;
    printf("enter the num : ");
    scanf("%d", &n);
    p = n*n;
    printf("%d\n", p);
}
void add(int n)
{
    int q , a , b;
    //printf("enter the num :");
    //scanf("%d", &n);
     printf("enter the num a :");
    scanf("%d", &a);
    printf("enter the num b:");
    scanf("%d", &b);
    q = a + b;
    printf("%d\n", q);
}
void facto(int n)
{
    printf("enter the num : ");
    scanf("%d", &n);
    int r = 1;
    while ( n>=1)
    {
        r = r*n;
        n--;
    }
    printf("%d", r);
}
void ams()
{
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0) {
       // remainder contains the last digit
        remainder = originalNum % 10;
        
       result += remainder * remainder * remainder;
        
       // removing last digit from the orignal number
       originalNum /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    
}
