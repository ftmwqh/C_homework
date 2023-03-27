#include<stdio.h>
int main()
{
	int a[20]={0,10,20,30,40,50,60,70,80,90},b[10]={80,35,75,15,5,55,25,55,65,45};
	int i,j,t;
	for(i=10,j=0;i<=19,j<=9;i++,j++)
	a[i]=b[j];
	for(j=0;j<19;j++)
	for(i=0;i<19-j;i++)
	if(a[i]>a[i+1])
	{
		t=a[i],a[i]=a[i+1],a[i+1]=t;
	}
	for(i=0;i<=19;i++)
	printf("%d ",a[i]);
	return 0;
}
