#include<stdio.h>
int main()
{
	char a[10][10];
	int b[10],c[10]={0,1,2,3,4,5,6,7,8,9};
	int i,j,s,t;
	printf("name:");
	for(i=0;i<=9;i++)
	gets(a[i]);
	printf("grade:");
	for(j=0;j<=9;j++)
	scanf("%d",&b[j]);
	printf("\n");
	for(j=0;j<9;j++)
	for(i=0;i<9-j;i++)
	if(b[i]<b[i+1])
	{
		t=b[i];b[i]=b[i+1];b[i+1]=t;
		s=c[i];c[i]=c[i+1];c[i+1]=s ;
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
