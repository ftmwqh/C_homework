#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b)
	    if(a>=c)
		printf("the biggest is %d\n",a);
		else 
		printf("the biggest is %d\n",c);
	
	else

		if(b>=c)
		printf("the biggest is %d\n",b);
		else
		printf("the biggest is %d\n",c);
		
	
} 


