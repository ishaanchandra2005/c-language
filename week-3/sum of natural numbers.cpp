#include <stdio.h>
int main()
{
	int s=0,i,n;
	printf("enter number till where sum is to be caculated:");
	scanf("%d",&n);
	for (i=0;i<n+1;i++)
	{
	s=s+i;
    }
    printf("sum is %d",s);
	return 0;
	
}
