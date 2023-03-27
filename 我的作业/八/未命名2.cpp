#include<stdio.h>
#include<string.h>
int main()
{
	char l1(char*p[10]);
	char l2(char*p[10]);
	char countries[10][40];
	char*p[10];
	int i;
	for(i=0;i<=9;i++)
	{
	gets(countries[i]);
	p[i]=countries[i];
    }
    l1(p);
    l2(p);
 } 
 char l1(char*p[10])
 {
 	int min,i,j;
 	char*a;
 	for(i=0;i<9;i++)
 {
	 for(min=i,j=i+1;j<10;j++)
 	if(strlen(p[j])<strlen(p[min]))
 	min=j;
 	if(min!=i)
 	{
	 a=p[min];
     p[min]=p[i];
 	 p[i]=a;
    }
 }
    printf("按长度：\n");
    for(i=0;i<10;i++)
    printf("%s\n",p[i]);
 }
 char l2(char*p[10])
 {
 		int min,i,j;
 	char*a;
 	for(i=0;i<9;i++)
 {
	 for(min=i,j=i+1;j<10;j++)
 	if(*p[j]<*p[min])
 	min=j;
 	if(min!=i)
 	{
	 a=p[min];
   p[min]=p[i];
 	p[i]=a;
    }
 }
    printf("\n");
    printf("按首字母：\n");
    for(i=0;i<10;i++)
    printf("%s\n",p[i]);
 }
