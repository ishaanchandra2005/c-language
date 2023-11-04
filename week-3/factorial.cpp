#include <stdio.h>
int main()
{
	int n,i,s=1;
	printf("enter a number:");
	scanf("%d",&n);
	for (i=n;i>=2;i--)
	{
		s=s*i;	
	}
	printf("%d",s);
	return 0;
}
