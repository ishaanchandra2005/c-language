#include <stdio.h>
int main()
{
	int i,t,n,s=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=n;i<n;i++)
	{
		t=n%10;
		s=(10*s)+t;
		n=n/10;
	}
	printf("%d",s);
	return 0;
}
