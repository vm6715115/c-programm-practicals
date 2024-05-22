#include<stdio.h>
int main()
{
	int row,totalnorow,space,symbol;
    totalnorow = 3;
	scanf("%d",&totalnorow);
	for(row=1; row<=totalnorow; row++)
	{
		for(space=1; space<=totalnorow-row; space++)
		{
			printf(" ");
		}
		for(symbol=1; symbol<=((2*row)-1); symbol++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}