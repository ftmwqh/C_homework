#include<stdio.h>
int main()
{
	int n,m,s,i,j,k;
	printf("犯人数：");
	scanf("%d",&n);
	int a[n]={0};
	printf("开始：");
	scanf("%d",&s);
	s-- ;
	printf("数几个"); 
	scanf("%d",&m);
	printf("处死：");
	for(i=s,j=0,k=0;j<n-1;i++)
	{
    if(a[i]==0)k++;
    if(k==m)
    {
    	a[i]=1;
    	j++;
    	k=0;
    	if(i==n)
    	printf("1");
    	else
    	printf("%d ",i+1);
    	
	}
	if(i==n)i=-1;
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(a[i]!=1)
		 printf("活着:%d",i+1);
	}
	
	
}
