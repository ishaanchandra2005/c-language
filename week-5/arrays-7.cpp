#include<stdio.h>
int main()
{
	int i,n,s=0,k;
	printf("enter size of the array:\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the array:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter number to for checking occurance:");
	scanf("%d",&k);
	for (i=0;i<n;i++)
	{
		if (a[i]==k)
		s=s+1;
	}
	printf("the number occurs %d times",s);
	return 0;
}
