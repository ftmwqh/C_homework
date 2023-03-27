#include<stdio.h>
int main()
{
	int x,y=10,s;
	printf("your score:");
	scanf("%d",&x);
	s=x/y;
	if(x>100||x<0)
	printf("DATA ERROR");
	else
	{
	printf("%d",x);
	switch(s)
	{
		case 10:printf("A");break;
		case 9:printf("A");break;
		case 8:printf("B");break;
		case 7:printf("C");break;
		case 6:printf("D");break;
		case 5:printf("D");break;
		case 4:printf("D");break;
		case 3:printf("D");break;
		case 2:printf("D");break;
		case 1:printf("D");break;
		case 0:printf("D");break;
	}
    }
}
