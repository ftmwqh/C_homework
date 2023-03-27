#include<stdio.h>
int main()
{   int x=17;

 	int y=x,i,s=0;
 	int a[1000];
 	for(i=0;y>0;i++)
 	{
 		a[i]=y%2;
 		y=y/2;
 		
	 }
 	for(i--;i>=0;i--)
 	{
 		s=10*s+a[i];
	 }
	 printf("%d",s);
 }
