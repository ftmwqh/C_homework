#include<stdio.h>
int main()
{ int bin(int x);
  int oct(int x);
  int hex(int x);
  int n;
  scanf("%d",&n);
  bin(n);
  oct(n);
  hex(n);
	
 } 
int bin(int x)
 {
 	int y,i;
 	double s=0;
 	int a[1000];
 	if(x<0)
 	{
    y=-x;
 	for(i=0;y>0;i++)
 	{
 		a[i]=y%2;
 		y=y/2;
 		
	 }
 	for(i--;i>=0;i--)
 	{
 		s=10*s+a[i];
	 }
     printf("-%.0lf\n",s);
    }
    else
    {
    	 y=x;
 	for(i=0;y>0;i++)
 	{
 		a[i]=y%2;
 		y=y/2;
 		
	 }
 	for(i--;i>=0;i--)
 	{
 		s=10*s+a[i];
	 }
     printf("%.0lf\n",s);
	}
 }
 int oct(int x)
 {  int y,i,s=0;
    int a[1000];
 	if(x<0)
 {
	y=-x;
 	for(i=0;y>0;i++)
 	{
	a[i]=y%8;
 	y=y/8;
    }
    printf("-0");
    for(i--;i>=0;i--)
    s=10*s+a[i]; 
    printf("%d\n",s);
  }   
    else
   {
	 y=x;
 	for(i=0;y>0;i++)
 	{
	a[i]=y%8;
 	y=y/8;
    }
    printf("0");
    for(i--;i>=0;i--)
    s=10*s+a[i]; 
    printf("%d\n",s);
    }
 }
 int hex(int x)
 {
 	int y,i,m;
 	char a[1000];
 	if(x<0)
 	{
	 y=-x;
 	for(i=0;y>0;i++)
 	{
 	m=y%16;
	 if(m<10)
	 a[i]=m+48;
	 else
	 a[i]=m+55;
	 y=y/16;	
	 }
	 printf("-0x");
	 for(i--;i>=0;i--)
	 printf("%c",a[i]);
    }
    else
	{
		y=x;
 	for(i=0;y>0;i++)
 	{
 	m=y%16;
	 if(m<10)
	 a[i]=m+48;
	 else
	 a[i]=m+55;
	 y=y/16;	
	 }
	 printf("0x");
	 for(i--;i>=0;i--)
	 printf("%c",a[i]);
	}
 }
