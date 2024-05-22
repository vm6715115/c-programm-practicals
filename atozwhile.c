#include<stdio.h>
int main()
{
    char i = 'A' , j = 'a' ;
    //printf("enter the char in lower case num j");
   // scanf("%", &j);
    while (i<= 'Z')
    {
        printf("%c\n", i );
        i++;
    }
    
     while (j<= 'z')
    {
        printf("%c\n", j);
        j++;
    }
}