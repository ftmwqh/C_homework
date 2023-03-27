#include<stdio.h>
int main()
{
	int i,j,l,n;
	scanf("%d",&n);
	for(i=1,j=1;i<=n;i++)
	{
	for(l=1;l<=i;l++,j++)
	printf("%d ",j);
	printf("\n");
    }
    return 0;
	
}
