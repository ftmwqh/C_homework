#include<stdio.h>
int main()
{   float sa(float a[10][5]);
    float ca(float a[10][5]);
    float high(float a[10][5]);
	float a[10][5];
	int i,j;
	for(i=0;i<=9;i++)
	{
	for(j=0;j<=4;j++)
	scanf("%f",&a[i][j]);
	}
	sa(a);
	ca(a);
	high(a);
}
 
float sa(float a[10][5])
{
	int i,j;
	float s[10],m,x=0,y=0,q;
	for(i=0;i<=9;i++)
	{
		for(m=0,j=0;j<=4;j++)
		m=m+a[i][j];
		s[i]=m/5;
	}
	printf("学生平均分：");
	for(i=0;i<=9;i++)
	printf("%f ",s[i]);
	printf("\n");
	for(i=0;i<=9;i++)
	{
		x=x+s[i]*s[i];
		y=y+s[i];
	}
	x=x/10;
	y=y*y/100;
	q=x-y;
	printf("方差：%f\n",q);
	
}

float ca(float a[10][5])
{
	int i,j;
	float s[5],m;
	for(j=0;j<=4;j++)
	{
		for(m=0,i=0;i<=9;i++)
		m=m+a[i][j];
		s[j]=m/10;
	}
	printf("课程平均分:");
	for(i=0;i<=4;i++)
	printf("%f ",s[i]);
	printf("\n");
}

float high(float a[10][5])
{
	int i,j,student,course;
	float max=a[0][0];
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=4;j++)
	{
		if(max<a[i][j])
		max=a[i][j];
		
	}
    }
    printf("最高分学生:");
    for(i=0;i<=9;i++)
    {
    	for(j=0;j<=4;j++)
    	{
    		if(a[i][j]==max)
    		{student=i+1;
    		printf("%d ",student);
			}
		}
	}
    printf("\n最高分课程:");
     for(i=0;i<=9;i++)
    {
    	for(j=0;j<=4;j++)
    	{
    		if(a[i][j]==max)
    		{course=j+1;
    		printf("%d ",course);
			}
		}
	}
}


