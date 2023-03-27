#include<stdio.h>
#include<math.h>
int main()
{
	float integral(double a,double b,double(*fun)(double));
	integral(0,1,sin);
	integral(-1,1,cos);
	integral(0,2,exp);
}
float integral(double a,double b,double(*fun)(double))
{
    double sum=0;
	double s=(b-a)/10000;
	int i;
	for(i=0;i<=10000;i++)
	sum=sum+(*fun)(a+s*i)*s;
	printf("%lf\n",sum);
}
