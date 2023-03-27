#include<stdio.h>
#include<string.h>
int main()
{   char judge(char b[]);
	char a[100];
	
	gets(a);
	
    judge(a);
 } 
 char judge(char b[])
 {  int i,n,left=0,right=0;
    n=strlen(b);
 	for(i=0;i<=n-1;i++)
 	{
 		if(b[i]=='(')
 		left++;
 		if(b[i]==')')
 		right++;
 		if(right>left)
 		break;
	 }
	 if(left==right)
	 printf("true");
	 else
	 printf("false");
  } 
