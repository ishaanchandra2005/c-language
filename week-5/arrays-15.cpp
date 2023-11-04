#include<stdio.h>
int main()
{
	int i,n,j;
	printf("enter size of array:");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements of the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		int s=1;
		for(j=i+1;j<n;j++)
		{
			if (a[i]==a[j])
		    s++;
	}
	    if(s>n/2)
	    {
	    printf("The majority element is %d",a[i]);
	   break;
		}
}
}
