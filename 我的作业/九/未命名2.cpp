#include<stdio.h>
#include<stdlib.h>
#define len sizeof(struct student)
struct student
{long num;
 char name[5];
 float t;
 float e;
 float s;
 struct student*next;
};
int n;
struct student*c()
{struct student*head;
 struct student*p1,*p2,*p,*s;
 struct student a;
 n=0;
 int i,m,j,k;
 p1=p2=(struct student*)malloc(len);
 scanf("%ld %s %f %f",&p1->num,&p1->name,&p1->t,&p1->e);
 p1->s=(p1->t)*0.6+(p1->e)*0.4;
 head=NULL;
 while(p1->num!=0)
 {n=n+1;
  if(n==1)head=p1;
  else p2->next=p1;
  p2=p1;
  p1=(struct student*)malloc(len);
  scanf("%ld %s %f %f",&p1->num,&p1->name,&p1->t,&p1->e);
  p1->s=(p1->t)*0.6+(p1->e)*0.4;
  } 
  p2->next=NULL;
  p=head;
  for(i=0;i<n-1;i++)
  {p=head;
  for(j=0;j<n-1-i;j++)
  {if((p->next->num)<(p->num))
  {s=p->next;
  a=*(p->next);
  *(p->next)=*(p);
  *(p)=a;
  s->next=p->next;
  p->next=s;
  }
  p=(*p).next;
  }
  }
 return head ;
}
void print(struct student*head)
{struct student*p;
 p=head;
 if(head!=NULL)
 do
 {printf("%ld %s %.1f %.1f %.1f\n",p->num,&p->name,p->t,p->e,p->s);
 p=p->next;
 }while(p!=NULL);
}
void order(struct student*head)
{struct student*p,*s;
struct student a;
int j,i;
for(i=0;i<n-1;i++)
  {p=head;
  for(j=0;j<n-1-i;j++)
  {if((p->next->s)>(p->s))
  {s=p->next;
  a=*(p->next);
  *(p->next)=*(p);
  *(p)=a;
  s->next=p->next;
  p->next=s;
  }
  p=(*p).next;
  }
  }
}
int main()
{struct student*head;
printf("\n");
head=c();
print(head);
printf("\n");
order(head);
print(head);
}


