#include<stdio.h>
int main ()
{
	int s,i=0,j=1,k,n;
	printf("enter the required element:");
	scanf("%d",&n);
	if (n==1)
	{
		printf("%d",i);
	}
	else if  (n==2)
	{
		printf("%d",j);
	}
	else
	{
	for (s=3;s<=n;s++)
	{
	k=i+j;
	i=j;
	j=k;
	}
    }
	printf("%d",k);
	
	return 0;
}
