#include<stdio.h>
int main()
{
	float a,b;
	scanf("%f",&a);
	if(a<=3000)
	{
		b=0;
		printf("%d",b);
	}
	else
	{
		if(a<=3500)
		{
		b=(a-3000.0)*0.05;
		printf("%f",b);
	    }
	    if(a>3500&&a<=4500)
	    {
	    	b=(a-3500.0)*0.1+25.0;
	    	printf("%f",b);
		}
		if(a>4500&&a<=6000)
		{
			b=(a-4500.0)*0.15 +125.0;
			printf("%f",b);
		 
		}	
		if(a>6000&&a<=8000)
		{
			b=(a-6000.0)*0.2+350.0;
			printf("%f",b); 
		}
		if(a>8000)
		{
			b=(a-8000.0)*0.25+750.0;
			printf("%f",b);
		}
	}
 } 
