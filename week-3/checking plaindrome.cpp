#include <stdio.h>
int main()
{
	int i,t,n;
	printf("enter the number:");
	scanf("%d",&n);
	for (i=n;n>0;i--)
	{
		t=n%10;
		printf("%d",t);
		n=n/10;
	}
	printf("%d",t);
	if (n==t)
	printf("the entered number is a palindrome");
	else 
	printf("entered number is not a palindrome");
	
	return 0;
	
}
