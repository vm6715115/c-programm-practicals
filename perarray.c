#include<stdio.h>
int main()
{
    int  i ,total = 0;
    float per = 0;
    int sub[5] = {12,13,44,55,65};
    for (  i = 0; i < 5; i++)
    {
        /* code */
        //printf("%d\n", sub[i]);
        total = total + sub[i];
    }
    /*total = total + sub[4];
    printf("%d",total);*/
    per = total/5;
    printf("%f\n",per);
    

}