#include<stdio.h>
int main()
{
	int i,n,t;
	printf("enter size of the array:\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the array:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
    for (i=n-1;i>=0;i--)
    {
    printf("%d",a[i]);
    }
    return 0;
}
