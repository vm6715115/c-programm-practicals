 #include<stdio.h>
 int main()
 {
    int i , fun = 0 , n , ele[5];
    printf("enter the element :");
    for (  i = 0; i < 5; i++)
    {
        /* code */
         scanf("%d", &ele[i]);
    }
       for (  i = 0; i < 5; i++)
    {
        /* code */
         printf("valu of ele [%d] is - %d\n",i , ele[i]);
    }
     printf("enter the num :");
    scanf("%d",&n);
    for (  i = 0; i < 5; i++)
    {
        /* code */
           if (n==ele[i])
    {
        /* code */
        fun = 1;
        break;
    }
    }
     
    if (fun == 1)
    {
        /* code */
        printf("yes ,this element  is persent index is [%d]: ", i); 
    }
    
    else
    {
        /* code */
        printf("no ,this element is persent :");

    }  
 }