#include<stdio.h>
int main ()
{
	int a,b,c;
	printf("enter side lengths");
	scanf("%d %d %d",&a,&b,&c);
	if (a==b && b==c && c==a)
	printf("it is an equilateral triangle");
	else if (a==b||b==c||c==a)
	printf("it is an isosceles triangle");
	else 
	printf("is is a scalene triangle");
}
