#include<stdio.h>
int main()
{
    int totalrow ,row , space, symbol ;
    totalrow =3;
    for (  row = 1; row <= totalrow; row++)
    {
        /* code */
        for (space = 1; space <= (totalrow - row); space++)
        {
            /* code */
            printf(" ");
        }
        // for ( symbol = 1; symbol <= ((2*row) -1); symbol++)
        // {
        //     /* code */
        //     printf("*");
        // }
        printf("\n");
        
    }
    
}