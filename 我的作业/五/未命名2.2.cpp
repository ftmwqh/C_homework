#include<stdio.h>
int main()
{
	char a[10][10];
	int b[10],c[10]={0,1,2,3,4,5,6,7,8,9};
	int i,j,s,t,max;
	printf("name:");
	for(i=0;i<=9;i++)
	gets(a[i]);
	printf("grade:");
	for(j=0;j<=9;j++)
	scanf("%d",&b[j]);
	printf("\n");
	for(i=0;i<9;i++)
	{
		for(max=i,j=i+1;j<10;j++)
		if(b[j]>b[max])
		max=j;
		if(max!=i)
		{
			t=b[max];b[max]=b[i];b[i]=t;
			s=c[max];c[max]=c[i];c[i]=s;
		}
		
	}
	printf("name grade\n");
	for(i=0;i<=9;i++)
	{
		printf("%s   ",a[c[i]]);
		printf("%d",b[i]);
		printf("\n");
    }
    

	return 0;
 } 
