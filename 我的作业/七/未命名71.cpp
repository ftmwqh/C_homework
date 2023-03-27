#define swap(a,b)\
int t;\
t=a;\
a=b;\
b=t;
#include<stdio.h>
int main()
{   int a, b;
	printf("two numbers:");
	scanf("%d%d",&a,&b);
	swap(a,b);
	printf("%d %d",a,b);
 } 
