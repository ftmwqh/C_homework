#include<stdio.h>
int main()
{
	float a,b,c;
	char d;
	scanf("%f%c%f",&a,&d,&b);
	switch(d)
	{
		case'+':c=a+b;break;
		case'-':c=a-b;break;
		case'*':c=a*b;break;
		case'/':c=a/b;break;
	}
	printf("%f\n",c);
 } 
