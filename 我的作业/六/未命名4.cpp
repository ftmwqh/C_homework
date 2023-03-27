#include<stdio.h>
int main()
{   int change(int b[4][4]);
    int i,j;
	int a[4][4]={{1,2,3,4},{5,6,7,8},{4,3,2,1},{9,8,7,6}};
	for (i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	printf("\n");
	change(a);
		for (i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
}
int change(int b[4][4])
{   
	int i,j,t;
	for(i=0;i<=3;i++)
	{
		for(j=i;j<=3;j++)
		{
			t=b[i][j];
			b[i][j]=b[j][i];
			b[j][i]=t;
		}
	}
	
	
}
