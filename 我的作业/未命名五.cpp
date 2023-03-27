#include<stdio.h>
int main()
{
	int a,b,c,e;
	scanf("%d",&e);
	a=e%10;
	b=e/10%10;
	c=e/100;
	printf("%d%d%d\n",a,b,c);
	return 0;
	
}
