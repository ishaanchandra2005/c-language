#include<stdio.h>
int main()
{
	int a,b,t;
	printf("enter values to be swapped:\n");
	scanf("%d %d",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("values are %d,%d",a,b);
	return 0;
}
