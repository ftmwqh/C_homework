#include<stdio.h>
int main()
{
	void num2str(int num,char str[]);
	int n;
	scanf("%d",&n);
	char s[20];
	num2str(n,s);
	printf("%s",s);
}
void num2str(int num,char str[])
{
	int i,j,k,m;
	char a[10];
	for(i=0;num>0;i++)
    {
	m=num%10+48;
	a[i]=m;
    num=num/10;
	}
	k=2*i-1;
	for(j=0;j<k;j++)
	{   
	    if(j%2==0)
	{
		str[j]=a[i-1];
		i--;
	}
		else
		str[j]='-'; 
	}
	
	
}
