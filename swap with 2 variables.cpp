#include<stdio.h>
int main()
{
	int a,b;
	printf("enter values of a and b");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	printf("the values of a and b are %d %d",a,b);
}
