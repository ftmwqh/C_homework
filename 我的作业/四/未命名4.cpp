#include<stdio.h>
#include<math.h>
int main()
{
	int s=0,n,k,i,m=0;
	printf("500以内最大的10个素数之和：");
	for(n=499;n>1;n=n-2)
	{k=sqrt(n);
	for(i=2;i<=k;i++)
	if(n%i==0)break;
	if(i>=k+1)
	{
		printf("%d",n);
		m=m+1;
		s=s+n;
		if(m==10)break;
		if(n<=3)break;
		printf("+");

	}
	if(m==10)break;
	
	
	}
	 
	printf("=%d",s);
}
