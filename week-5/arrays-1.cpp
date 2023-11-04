#include<stdio.h>
#include<math.h>
int main()
{
	int a[5],i,n,k,s;
	printf("enter elements of array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	n=a[0];
	for (i=0;i<5;i++)
	{
		if (a[i]>n)
		n=a[i];
	}
	printf("the greatest element is %d\n",n);
	k=a[0];
	for (i=0;i<5;i++)
	{
		if (a[i]<k)
		n=a[i];
	}
	printf("the minimum element is %d\n",k);
	
	for (i=0;i<5;i++)
	{
		s=s+a[i];
	}
	printf("average is %d/5",s);
	
}




















   
