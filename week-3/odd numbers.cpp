#include <stdio.h>
int main()
{
	int i,n;
	printf("input the last number of series:");
	scanf("%d",&n);
	for(i=1;i<n+1;i=i+2)
	{
		printf("%d	",i);
	}
	return 0;
}
