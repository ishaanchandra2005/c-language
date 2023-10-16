#include<stdio.h>
int main ()
{
	int i,j,s;
	for(i=0;i<5;i++)
	{
		for (s=0;s<i;s++)
		printf(" ");
		for (j=0;j<9-2*i;j++)
		printf("*");
		printf("\n");
	}
}
