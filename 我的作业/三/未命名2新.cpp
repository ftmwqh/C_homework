#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,p,t,s;
	scanf("%f%f%f",&a,&b,&c);
	p=(a+b+c)/2;
	if(a+b>c&&a+c>b)
	{
		if(a==b&&a==c&&b==c)
		printf("等边三角形\n"); 
		if(a==b||a==c)
		printf("等腰三角形\n");
		if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
		printf("直角三角形\n"); 
		else
		{
			if(a!=b&&a!=c&&b!=c)
			printf("一般三角形"); 
		}
		t=p*(p-a)*(p-b)*(p-c);
		s=sqrt(t);
		printf("%f\n",s);
		
	 } 
	 else
	 printf("DATA ERROR");
} 
