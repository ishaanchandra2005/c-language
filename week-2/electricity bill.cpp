#include<stdio.h>
#include<math.h>
int main ()
{
	int a;
	printf ("enter number of units");
	scanf("%d",a);
	if (a>=0 && a<=100)
	printf ("the bill is %d",a*2);
	else if (a>100 && a <=250)
	printf("the bill is %d",a*3);
	else 
	printf("the bill is %d",a*5);
}
