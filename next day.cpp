#include<stdio.h>
#include<math.h>
int main()
{
	int d,m,y;
	printf("enter date:");
	scanf("%d",&d);
	printf("enter month:");
	scanf("%d",&m);
	printf("enter year:");
	scanf("%d",&y);
	if
	(m>12||m<1)
	printf("date is invalid");
	
else if (y%4==0&&(y%100!=0||y%400==0))
	{
		if(d<=28&&d>=1)
	    {
	    	d++;
		    printf("date is %d %d %d",d,m,y);
	    }
		else if(d==29)
	    {
			if (m==2)
		    {
		    	d=1;
			    m++;
		        printf("date is %d %d %d",d,m,y);
            }
		    else
	        {
			   d++;
			   printf("date is %d %d %d",d,m,y);	
	        }
	}
	    else if(d==30 && (m==2||m==4||m==6||m==9||m==11))
    	{
		   m++;
		   d=1;
	       printf("date is %d %d %d",d,m,y);
    	}
		else if (d==31)
	   {
			if (m==12)
	        {
		       y++;
		       d=1;
		       m=1;
	     	   printf("date is %d %d %d",d,m,y);
        	}
		    else if(m==1||m==3||m==5||m==7||m==8||m==10)
	       {
	        	m++;
	        	d=1;
	        	printf("date is %d %d %d",d,m,y);
        	}
        }
    else
    {
    	printf("date is invalid");
	}
}
 
else
{
		if (d<=27)
	    {
			d++;
		printf("date is %d %d %d",d,m,y);
	    }
		else if (d==28)
	    {
			if (m==2)
		    {
		    	d=1;
			m++;
		    printf("date is %d %d %d",d,m,y);
            }
		else
	    {
			d++;
			printf("date is %d %d %d",d,m,y);	
	    }
	}
	    else if(d==30 && (m==2||m==4||m==6||m==9||m==11))
	{
		m++;
		d=1;
	    printf("date is %d %d %d",d,m,y);
	}
		else if (d==31)
	{
			if (m==12)
	{
		y++;
		d=1;
		m=1;
		printf("date is %d %d %d",d,m,y);
	}
		else if(m==1||m==3||m==5||m==7||m==8||m==10)
	{
		m++;
		d=1;
		printf("date is %d %d %d",d,m,y);
	}
    }
    else if(d==29)
    {
    	d++;
    	printf("date is %d %d %d",d,m,y);
	}
	else 
	{
		printf("date is invalid");
	}
}
return 0;
}
