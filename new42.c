/*#include <stdio.h>
const int CITY = 2;
const int WEEK = 7;
int main()
{
 int temperature[CITY][WEEK];
 // Using nested loop to store values in a 2d 
 for (int i = 0; i < CITY; ++i)
 {
 for (int j = 0; j < WEEK; ++j)
 {
 printf("City %d, Day %d: ", i + 1, j + 1);
 scanf("%d", &temperature[i][j]);
 }
 }
 printf("\nDisplaying values: \n\n");
 // Using nested loop to display vlues of a 2d
 for (int i = 0; i < CITY; ++i)
 {
 for (int j = 0; j < WEEK; ++j)
 {
 printf("City %d, Day %d = %d\n", i + 1, j + 1, 
temperature[i][j]);
 }
 }
 return 0;
}*/
#include<stdio.h>
int main()
{
    int CITY ,COVID;
        int temperature[CITY][COVID];
      // Using nested loop to store values in a 2d 
     for (int i = 0; i < CITY; ++i)
      {
     for (int j = 0; j <COVID ; ++j)
      {
       printf("City %d, Day %d: ", i + 1, j + 1);
        scanf("%d", &temperature[i][j]);
       }
}
}