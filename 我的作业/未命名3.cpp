#include<stdio.h>
int main()
{
	float x=2.5,y=4.7,b;
	int a=7;
	b=x+a%3*(int)(x+y)%2/4;
	printf("%f\n",b);
}
