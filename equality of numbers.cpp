#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter three numbers");
	scanf("%d %d %d",&a,&b,&c);
	if (a==b && b==c && c==a)
	printf("the numbers are equal");
	else
	printf("the numbers are different");
}
