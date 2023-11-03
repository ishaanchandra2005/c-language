#include<stdio.h>
int main()
{
	char x;
	printf("enter an aplhabet:\n");
	scanf("%c",&x);
	if  (x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
	{
	printf("entered alphabet is a vowel");
    }
	else
	{ 
	printf("the entered alpahbet is a consonant");
    }
}
