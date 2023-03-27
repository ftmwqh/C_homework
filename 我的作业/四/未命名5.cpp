#include<stdio.h>
int main()
{
	int n,i,j,k,l,s,t;
	for(n=6;n<=100;n=n+2)
	{
	
	j=n-2;
	s=n/2;
	for(i=2;i<=s,j>=s;i++,j--)
	{
		for(t=1,k=2;k<i;k++)
		if(i%k==0)
		t=0;
		if(t)
		{
			for(l=1,k=2;k<j;k++)
			if(j%k==0)
			l=0;
			if(l)
			{
				printf("%d=%d+%d\n",n,i,j);
			}
		}
	}
}
}
