#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("enter marks obtained in each subject");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	f=(a+b+c+d+e)/5;
	printf("percentage obtained is %d",f);
	return (0);
}
