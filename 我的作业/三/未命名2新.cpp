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
		printf("�ȱ�������\n"); 
		if(a==b||a==c)
		printf("����������\n");
		if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b)
		printf("ֱ��������\n"); 
		else
		{
			if(a!=b&&a!=c&&b!=c)
			printf("һ��������"); 
		}
		t=p*(p-a)*(p-b)*(p-c);
		s=sqrt(t);
		printf("%f\n",s);
		
	 } 
	 else
	 printf("DATA ERROR");
} 
