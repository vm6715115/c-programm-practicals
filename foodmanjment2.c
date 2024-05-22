#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int total = 0 , n;
char ch;
int cheese_pizza = 80 , cheese_burger = 100 , tomato_cheese_pizza = 120 , veg_roll = 50;
int product_quantity;
int calculatebill()
{
     
    do
    {
         printf("\n\nwhat do you want to order?  \n");
        printf("enter the num : ");
        scanf("%d",&n);
        printf("Enter quantity : ");
        scanf("%d", &product_quantity);
        /* code */
        
        printf("\n\nItems ordered");
        if (n == 1)
        {
            /* code */
            printf("\ncheese pizza\n");
            total = cheese_pizza*product_quantity + total;
        }
        else if ( n == 2)
        {
            /* code */
            printf("\ncheese burger\n");
            total = cheese_burger*product_quantity + total ;
        }
        else if ( n == 3)
        {
            /* code */
            printf("\ntomato cheese pizza\n");
            total = tomato_cheese_pizza*product_quantity + total;
        }
        else if ( n == 4)
        {
            /* code */
            printf("\nveg roll\n");
            total = veg_roll*product_quantity + total;
        }
        else
        {
             printf("\n Worng input\n");
        }
        printf("\n Do you want to continue ? enter = (y/n) \n");
        scanf("\n%c",&ch);
         

    } while (ch == 'y' || ch == 'Y');

}
int generate_bill()
{
     printf("\n\n total bill :%d", total);   
}
void main()
{
    printf("\n\n\n\n\t\t\t\t\t\t\t**Welcome To The Spicy Affair Restro**");
    printf("\n\ntodays menu");
    printf("\n\n1.cheese pizza\n\n2.cheese burger\n\n3.tomato cheese pizza\n\n4.veg roll" );
    repeate1:
     printf("\nIf you want to order and calculate bill then press 'Y' otherwise 'N': ");
    scanf("\n%c", &ch);
    if (ch == 'Y' || ch == 'y')
    {
          calculatebill();
    }
    else if (ch == 'N' || ch == 'n')
    {
        exit(0);
    }
    else
    {
        printf("Invalid character tyr again\n");
        goto repeate1;
    } 
    

    //genrate bill

    repeate2:
    printf("\nIf you want to generate your bill then press 'Y' otherwise 'N': ");
    scanf("\n%c", &ch);
    if (ch == 'Y' || ch == 'y')
    {
         generate_bill();
    }
    else if (ch == 'N' || ch == 'n')
    {
        exit(0);
    }
    else
    {
        printf("Invalid character tyr again\n");
        goto repeate2;
    }   
}