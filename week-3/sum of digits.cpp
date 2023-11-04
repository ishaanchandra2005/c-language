#include <stdio.h>
int main()
{
	int n,i,x=0,s=0;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=0;i<x+1;i++)
	{
		if (n==0)
	break;
	s=s+(n%10);
    n=n/10;
    x++;
    }
	printf("%d",s);
	return 0;
}
