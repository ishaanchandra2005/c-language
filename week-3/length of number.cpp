#include <stdio.h>
int main()
{
	int n,i,s=0;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=0;i<s+1;i++)
	{
		if (n==0)
	break;
	n=n/10;
	s++;
		}
		printf("%d",s);
	return 0;
}
