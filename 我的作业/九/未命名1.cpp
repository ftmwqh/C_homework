#include<stdio.h>
#include<string.h>
#include<math.h>
struct date
{
 int year;
 int month;
 int day;
};
struct book
{char num[20];
 char name[100];
 char writer[100];
 char print[100];
 struct date time;
}b[10];
int change(char*s)
{double t,i,l;
 l=strlen(s);
 t=0;
 for(i=l-1;i>=0;i--)
 {
 	t=t+(int)(*s-'0')*pow(10,i);
 	s++;
 }
 return t;
}
void input(struct book b[])
{char s[1000];
 char*token;
 int i,j;
 const char z[2]="#";
 token=strtok(s,z);
 for(i=0;i<10;i++)
 {gets(s);
 strcpy(b[i].num,strtok(s,z));
 strcpy(b[i].name,strtok(NULL,z));
 strcpy(b[i].writer,strtok(NULL,z));
  strcpy(b[i].print,strtok(NULL,z));
  b[i].time.year=change(strtok(NULL,z));
  b[i].time.month=change(strtok(NULL,z));
  b[i].time.day=change(strtok(NULL,z));
 }
 token=strtok(NULL,s);
 printf("\n");
}
void output(struct book b[])
{int i;
 for(i=0;i<10;i++)
 printf("%s %s %s %s %d %d %d\n",b[i].num,b[i].name,b[i].writer,b[i].print,b[i].time.year,b[i].time.month,b[i].time.day);
}
void order(struct book b[])
{int i,j;
 struct book a;
 for(i=0;i<10;i++)
 {for(j=i;j<10;j++)
 {if(b[i].time.year>b[j].time.year)
 {a=b[i];b[i]=b[j];b[j]=a;
 }
 else if(b[i].time.year==b[j].time.year&&b[i].time.month>b[j].time.month)
 {a=b[i];b[i]=b[j];b[j]=a;
 }
 else if(b[i].time.year==b[j].time.year&&b[i].time.month==b[j].time.month&&b[i].time.day>b[j].time.day)
 {a=b[i];b[i]=b[j];b[j]=a;
 }
 }
 }
 output(b);
}


int main()
{
	
	input(b);
	output(b);
	printf("\n");
	order(b);
}
