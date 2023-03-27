#include<stdio.h>
int main()
{
	int i,j,l,n;
	scanf("%d",&n);
	for(i=n,j=n*(n-1)/2+1;i>=1;i--,j=i*(i-1)/2+1)
	{
		for(l=1;l<=i;l++,j++)
		printf("%d ",j);
		printf("\n");
	}
	return 0;
}
