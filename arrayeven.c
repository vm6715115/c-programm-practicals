#include<stdio.h>
 int main() 
 { 
 int arr1[50],n;
 printf(" How many elements you want to enter in one dimensional array : ");
 scanf("%d",&n);
 printf(" Please enter %d elements one by one in first 1-D array : ",n);
 for(int i=0;i<n;i++)
 {
  scanf(" %d \n",&arr1[i]);
 }
 printf(" Array elements is given below \n",n);
 for(int j=0;j<n;j++)
 {
  printf(" %d \n",&arr1[j]);
 }
 printf(" Even number in array is given below \n",n);
 for(int k=0;k<n;k++)
 {
   if(arr1[k]%2==0)   
   printf(" %d  ",&arr1[k]);
 }

 }