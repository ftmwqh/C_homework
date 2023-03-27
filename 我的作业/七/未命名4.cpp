#include<stdio.h>
int main()
{
    void str2rts(char*str);
	char s[20];
	int i;
	scanf("%s",s);
	char*p=s;
	str2rts(p);
	printf("%s",p);
	
	
 } 
 void str2rts(char*str)
 {
 	char b[20];
 	int i,j,k;
 	for(i=0;*(str+i)!='\0';i++);
 	k=i;
 	for(j=0;i>0;i--,j++)
 	b[j]=*(str+i-1);
 	for(j=0;j<k;j++)
 	*(str+j)=b[j];
 	
 	
 	
 }
