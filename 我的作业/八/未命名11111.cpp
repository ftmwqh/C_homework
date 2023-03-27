#include<stdio.h>
#include<string.h>
int main()
{   
    char a[80];
    gets(a);
	char*p=a;
	int i,j,n,k,m=0,b[10],s=0;
	n=strlen(a);
	for(j=0;j<n;j=j+i)
	{
		for(i=0;*(p+j+i)!=','&&*(p+j+i)!=' '&&*(p+j+i)!='.'&&*(p+j+i)!='\0';)
		i++;
		i++;
		if(i>m)
		{
			m=i;
			k=j;
		}
	}
		for(j=0;j<n;j=j+i)
	{
		for(i=0;*(p+j+i)!=','&&*(p+j+i)!=' '&&*(p+j+i)!='.'&&*(p+j+i)!='\0';)
		i++;
		i++;
		if(i==m)
		{
			b[s]=j;
			s++;
		}
	}
	for(j=0;j<s;j++)
	{
	for(i=0;*(p+b[j]+i)!=','&&*(p+b[j]+i)!=' '&&*(p+b[j]+i)!='.'&&*(p+b[j]+i)!='\0';i++)
	printf("%c",*(p+b[j]+i));
	printf("\n");
    }
}
