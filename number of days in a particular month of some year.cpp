#include<stdio.h>
int main ()
{
	int year,month;
	printf("enter month");
	scanf("%d",&month);
	printf("enter year");
	scanf("%d",&year);
	if (year%4==0 && (year%100!=0 || year%400==0))
	{
		if (month==1||month==3||month==5||month==7||month==8||month==10||month==12)
		{
		printf("31");
		}
                else if (month==4||month==6||month==9||month==11)
		{
		printf("30");
		}
		else if(month==2)
		{
			printf("29");
		}
		else
		printf("days donot exist");
	}
		else
	{
	 if (month==1||month==3||month==5||month==7||month==8||month==10||month==12)
		{
		printf("31");
		}
                else if (month==4||month==6||month==9||month==11)
		{
		printf("30");
		}
		else if(month==2)
		{
			printf("28");
		}
		else
		printf("days donot exist");
	}
}
