#include<stdio.h>
#include<stdlib.h>
struct student
{int num;
 char name[5];
 float s1;
 float s2;
}stu[10];
int main()
{int i,n;
 FILE*f1,*f2;
 if((f1=fopen("student1.txt","r"))==NULL)
 {printf("cannot open file1\n");
  exit(0);
 }
  if((f2=fopen("score.txt","w"))==NULL)
 {printf("cannot open file2\n");
  exit(0);
 }
 fscanf(f1,"%d",&n);
 for(i=0;i<10;i++)
 fscanf(f1,"%d %s %f %f\n",&stu[i].num,&stu[i].name,&stu[i].s1,&stu[i].s2);
 fprintf(f2,"%d\n",n);
 for(i=0;i<10;i++)
 fprintf(f2,"%d %s %f %f ×ÜÆÀ=%f\n",stu[i].num,stu[i].name,stu[i].s1,stu[i].s2,0.6*stu[i].s1+0.4*stu[i].s2);
  fclose(f1);
 fclose(f2);
}
