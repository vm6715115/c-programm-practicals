#include<stdio.h>
int main()
{
    int total = 0;
    char ch ;
    printf("\n\n\n\n\t\t\t\t\t\t\t*Welcome To The Spicy Affair Restro*");
    printf("\n\ntodays menu");
    do
    {
        /* code */
        int a = 80 , b = 100 , c = 120 , d = 50, n;
        printf("\n\n1.cheese pizza\n\n2.cheese burger\n\n3.tomato cheese pizza\n\n4.veg roll");
        printf("\n\nwhat do you want to order?  \n");
        printf("enter the num : ");
        scanf("%d",&n);
        printf("\n\nItems ordered");
        if (n == 1)
        {
            /* code */
            printf("\ncheese pizza\n");
            total = a + total;
        }
        else if ( n == 2)
        {
            /* code */
            printf("\ncheese burger\n");
            total = b + total ;
        }
        else if ( n == 3)
        {
            /* code */
            printf("\ntomato cheese pizza\n");
            total = c + total;
        }
        else if ( n == 4)
        {
            /* code */
            printf("\nveg roll\n");
            total = d + total;
        }
        else
        {
             printf("\n Worng input\n");
        }
        printf("\n Do you want to continue ? enter = (y/n) \n");
        scanf("\n%c",&ch);
         

    } while (ch == 'y' || ch == 'Y');

    printf("\n\n total bill :%d", total);   
}