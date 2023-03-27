#include<stdio.h>
int main()
{
	float x,y;
	scanf("%f",&x);
	if(x<-3||-3<x&&x<0)
	y=x*x+x-6;
		
    if(0<=x&&x<2||2<x&&x<3||3<x&&x<10)
	y=x*x-5*x+6;
			
    if(x==-3||x==2||x==3||x>=10)
	y=x*x-x-1;
	printf("%f",y);
}
