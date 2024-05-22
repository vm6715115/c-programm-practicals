#include<stdio.h>
int main()
{
    int num = 231;
    int *ptr;
    ptr = &num;
     printf("address the varibale : %x\n", ptr  );
     printf("value of variable is %d" , *ptr);
}