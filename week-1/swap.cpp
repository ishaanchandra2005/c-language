#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter values of a and b");
	scanf("%d %d",&a,&b);
	c=(a-b)+b;
	d=(b-a)+a;
	printf("the values are %d %d",d,c);
}
