#include<stdio.h>
int main()
{
	double a=1,s=0;
	int n;
	for(n=1;n<=20;n++)
	{
		a=a*n;
		s=s+a;
	}
	printf("s=%20.15e",s);
	return 0;
}
