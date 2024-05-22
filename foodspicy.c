#include<stdio.h>
#include<string.h>
char  *productName[] ={  "cheese pizza" ,"onion pizza" , "tomato cheese pizza" , "cheese corn pizza" , "spicy affair pizza" , "veg burger" , "cheese burger" , "paneer burger" , "spring roll" , "cheese roll" , "cheese corn roll" , "steam momo" , "tea" , "coffee" , "cold coffee"  };

int cheese_pizza = 80 ,onion_pizza = 80 , tomato_cheese_pizza = 80 , cheese_corn_pizza = 100 , spicy_affair_pizza = 140 , veg_burger = 25 , cheese_burger = 35 , paneer_burger = 45 , spring_roll = 40 , cheese_roll = 50 , cheese_corn_roll = 70 , steam_momo = 40 , tea = 10 , coffee = 30 , cold_coffee = 50;

int product_quantity[15];//dout                                                     //dout

int count1 = 0;

char product_name[19][20]; //dout

/*clculatebill()
{
    exit(0);
}*/

void main()
{
    char ch , temp_star[20] ;
    int check , count = 0;
    printf("\n****************************************\n"); 

    printf("\n\n**Welcome To The Spicy Affair Restro**\n\n");

    printf("\n****************************************\n");

    printf("please enter the super delicious menu \n");

    repeate1:

    count = 0;
    printf("enter menu name : ");
     fflush(stdin);//dout
    gets(temp_star);
    for (int i = 0; i < 15; i++)
    {
        /* code */
        check = strcmp(temp_star , productName[i]);
        if ( check == 0 )
        {
            /* code */
            strcpy(product_name[count1] , temp_star);
        }
        else
        {
            /* code */
                count++;                                                     //dout
                if (count == 15)//dout
                {
                    printf("Invalid menu name\n");
                    goto repeate1;
                }  
        }
    }
     repeate2:

        printf("Enter quantity : ");
        scanf("%d", &product_quantity[count1]);
        if (product_quantity[count1] < 1)
        {
            printf("Invalid quantity try again\n");
            goto repeate2;
        }
         count1++;    //dout


         repeate3 :


         printf(" if you enter all menu then press 'Y' otherwise 'N' ");
          fflush(stdin);
         scanf("%c",&ch);
         if ( 'Y' || 'y')
         {
            /* code */
            // clculatebill();
            // exit(0);
         }
         else if ( 'N' || 'n')
         {
            /* code */
             goto repeate1;
         }
         else
         {
             printf(" Invalid press try again :");
             goto repeate3;
         }
         
         
         

}