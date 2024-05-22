 #include<stdio.h>
 int main()
 {
    int  x ;
    printf("enter the num :");
    scanf("%d",&x);
    int  res;
    res = rec(x);
    printf("%d", res);
 }
 int rec(int x)
 {
    if ( x <= 1)
    {
          return 1;
    }
    else
    {
         return x*rec(x-1);
    }
    
    
 }