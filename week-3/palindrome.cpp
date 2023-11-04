#include <stdio.h>
int main()
{
	int i,t,n,s=0,x,temp=0,y;
	printf("enter the number:");
	scanf("%d",&n);
	x=n;
	y=n;
	while(y>0){
		temp+=1;
		y=y/10;
	}
	for(i=0;i<temp;i++)
	{
		t=n%10;
		s=(10*s)+t;
		n=n/10;
	}
	if (s==x)
	printf("it is a palindrome");
	else 
	printf("it is not a palindrome");
	return 0;
}
