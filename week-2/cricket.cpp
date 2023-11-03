#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the score of each type of ball");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b && a>c)
	printf("a is better ball");
	else if (b>a && a>c)
	printf("b is better ball");
	else 
	printf("c is better ball");
	
}
