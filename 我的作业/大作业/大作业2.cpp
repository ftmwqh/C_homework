#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>
#define len sizeof(struct contacts)
struct contacts
{char name[20];
 char phone[20];
 char qq[20];
 char always[5];
 struct contacts*next;
};//������ϵ�˽ṹ�� 
int n;
struct contacts*create(void)//������ʼ��ϵ�ˣ���������ͷ��ַ 
{struct contacts*head,*p1,*p2;
 n=0;
 p1=p2=(struct contacts*)malloc(len);
 head=NULL;
 printf("����over��ʾ���\n");
  printf("����:\n");                scanf("%s",p1->name);
  printf("�绰:\n");                scanf("\n%s",p1->phone);
  printf("qq:\n");                  scanf("\n%s",p1->qq);
  printf("�Ƿ�Ϊ������ϵ�ˣ�\n ");  scanf("\n%s",p1->always);
 while(strcmp(p1->name,"over")!=0)
 {n=n+1;
  if(n==1)head=p1;
  else p2->next=p1;
  p2=p1;
  p1=(struct contacts*)malloc(len);
  printf("����:\n");                scanf("\n%s",p1->name);
  if(strcmp(p1->name,"over")==0)break;
  printf("�绰:\n");                scanf("\n%s",p1->phone);
  printf("qq:\n");                  scanf("\n%s",p1->qq);
  printf("�Ƿ�Ϊ������ϵ�ˣ�\n ");  scanf("\n%s",p1->always);
 }
 p2->next=NULL;
 return(head);
}
void print(struct contacts*head)//��ӡ����ϵ����Ϣ������Ϊ����ͷ��ַ 
{struct contacts*p;
 if(head!=NULL)
 {p=head;
  printf("����%d��\n",n);
  printf("����------�绰-----------qq----------�Ƿ���\n");
  do
  {printf("%-10s%-15s%-12s%-5s\n",p->name,p->phone,p->qq,p->always);
  p=p->next;
  }while(p!=NULL);
  printf("=============================================\n");
 }
 else printf("ͨѶ¼Ϊ��\n");
}
struct contacts*add(struct contacts*head)//�½���ϵ�� ������Ϊ����ͷ��ַ����������ͷ��ַ 
{struct contacts*p,*p1,*p2;
 p1=head;
 p=(struct contacts*)malloc(len);
  printf("����:\n");                scanf("%s",p->name);
  printf("�绰:\n");                scanf("\n%s",p->phone);
  printf("qq:\n");                  scanf("\n%s",p->qq);
  printf("�Ƿ�Ϊ������ϵ�ˣ�\n ");  scanf("\n%s",p->always);
  n=n+1;
  if(head==NULL)
  {head=p;
   p->next=NULL;
   return head;
  }
  else
  {while(p2->next!=NULL)
  {
    p1=p1->next;
    p2=p1;
  }
  p2->next=p;
  p->next=NULL;
  }
  return head;
}
void order(struct contacts*head)//����ϵ�˰��������򣬲���Ϊ����ͷ��ַ 
{struct contacts*p,*s;
 struct contacts a;
 int j,i;
 for(i=0;i<n-1;i++)//ð�ݷ��������� 
  {p=head;
  for(j=0;j<n-1-i;j++)
  {if(strcmp(p->next->name,p->name)<0)
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
struct contacts*searchname(struct contacts*head)//������������ϵ�� 
{struct contacts*p;
 p=head;
 int i;
 char a[20];
 printf("������Ҫ���ҵ�������");
 scanf("%s",a);
 printf("����------�绰-----------qq----------�Ƿ���\n");
 while(p!=NULL)
 {if(strcmp(p->name,a)==0)break;
  p=p->next;
 }
 printf("%-10s%-15s%-12s%-5s\n",p->name,p->phone,p->qq,p->always);
 return p;
}
struct contacts*searchphone(struct contacts*head)//���绰������ϵ�� 
{struct contacts*p;
 p=head;
 int i;
 char a[20];
 printf("������Ҫ���ҵĵ绰��");
 scanf("%s",a);
 printf("����------�绰-----------qq----------�Ƿ���\n");
 while(p!=NULL)
 {if(strcmp(p->phone,a)==0)break;
  p=p->next;
 }
 printf("%-10s%-15s%-12s%-5s\n",p->name,p->phone,p->qq,p->always);
 return p;
}
struct contacts*searchqq(struct contacts*head)//��qq������ϵ�� 
{struct contacts*p;
 p=head;
 int i;
 char a[20];
 printf("������Ҫ���ҵ�qq��");
 scanf("%s",a);
 printf("����------�绰-----------qq----------�Ƿ���\n");
 while(p!=NULL)
 {if(strcmp(p->qq,a)==0)break;
  p=p->next;
 }
 printf("%-10s%-15s%-12s%-5s\n",p->name,p->phone,p->qq,p->always);
 return p;
}
void searchalways(struct contacts*head)//����������ϵ�˺���������Ϊ����ͷָ�� 
{struct contacts*p;
 p=head;
 printf("����------�绰-----------qq----------�Ƿ���\n");
 while(p!=NULL)
 {if(strcmp(p->always,"yes")==0)
  printf("%-10s%-15s%-12s%-5s\n",p->name,p->phone,p->qq,p->always);
  p=p->next;
 }
}
struct contacts*searchmul(struct contacts*head)//���������ѯ������Ϊͷָ�룬����ֵΪ����������ϵ��ָ�룻 
{struct contacts guy;
 struct contacts*p;
 printf("�������������绰,qq,�Ƿ�Ϊ������ϵ��(��֪��������none,�м��ÿո����):\n");
 scanf("%s %s %s %s",guy.name,guy.phone,guy.qq,guy.always);
 p=head;
 printf("����------�绰-----------qq----------�Ƿ���\n");
 while(p!=NULL)
 {if((strcmp("none",guy.name)==0||strcmp(p->name,guy.name)==0)&&(strcmp("none",guy.phone)==0||strcmp(p->phone,guy.phone)==0)&&(strcmp("none",guy.qq)==0||strcmp(p->qq,guy.qq)==0)&&(strcmp("none",guy.always)==0||strcmp(p->always,guy.always)==0))
  {printf("%-10s%-15s%-12s%-5s\n",p->name,p->phone,p->qq,p->always);
   break;
  }
  p=p->next;
 }
  return p;
}
struct contacts*del(struct contacts*p,struct contacts*head)//ɾ��������������ϵ�� ������Ϊ����������ϵ��ָ�� ������ͷָ�� 
{struct contacts*p1,*q;
 q=head;
 if(p!=head)
 {while(1)
  {if(q->next==p)break;
  q=q->next;
  }
  q->next=p->next;
  free(p);
 }
 else
 {p1=p->next;
  head=p1;
  free(p);
 }
 printf("��ɾ��\n");
 return head;
}
void update(struct contacts*p)//�޸���Ϣ����������Ϊ����������ϵ��ָ�� 
{int i;
 printf("�������޸���Ŀ��1.���� 2.�绰 3.qq 4.�Ƿ�Ϊ������ϵ��\n");
 scanf("%d",&i);
 switch(i)
 {case 1:printf("����:\n");                scanf("\n%s",p->name);break;
  case 2:printf("�绰:\n");                scanf("\n%s",p->phone);break;
  case 3:printf("qq:\n");                  scanf("\n%s",p->qq);break;
  case 4:printf("�Ƿ�Ϊ������ϵ�ˣ�\n ");  scanf("\n%s",p->always);break;
 }
 printf("���޸�\n");
}
void save(struct contacts*head)//������ϵ����Ϣ���ļ��У�����Ϊͷָ�� 
{FILE*fp;
 struct contacts*p;
 p=head;
 fp=fopen("ͨѶ¼.txt","w");
 p=head;
 while(p!=NULL)
 {fprintf(fp,"%s %s %s %s\n",p->name,p->phone,p->qq,p->always);
  p=p->next;
 }
 printf("�ѱ���\n");
 fclose(fp);
}
struct contacts*open(struct contacts*head)//��ͨѶ¼�ļ�����������Ϊͷָ�룬����ֵΪ���ļ�������½���������ͷָ�� 
{FILE*fp;
 struct contacts*p1,*p2;
 if((fp=fopen("ͨѶ¼.txt","r"))==NULL)
 {printf("�򲻿�\n");
  exit(0);
 }
 p1=p2=(struct contacts*)malloc(len);
 head=p1;
 n=0;
 while(feof(fp)==0)
 { fscanf(fp,"%s %s %s %s",&p1->name,&p1->phone,&p1->qq,&p1->always);
   if(feof(fp)!=0)break;
   p2->next=p1;
   p2=p1;
   p1=(struct contacts*)malloc(len);
   n=n+1;
 }
 p2->next=NULL;
 printf("�Ѵ�\n");
 return head;
 fclose(fp);
}
void putalways(struct contacts*head)//����������ϵ����Ϣ������Ϊͷָ�� 
{FILE*fp;
 struct contacts*p;
 fp=fopen("������ϵ��.txt","w");
 p=head;
 fprintf(fp,"����------�绰-----------qq----------�Ƿ���\n");
 while(p!=NULL)
 {if(strcmp(p->always,"yes")==0)
  fprintf(fp,"%-10s%-15s%-12s%-5s\n",p->name,p->phone,p->qq,p->always);
  p=p->next;
 }
 printf("�ѵ���\n");
 fclose(fp);
}
struct contacts*search(struct contacts*head)//ѡ��������ʽ����������Ϊ����ͷָ�룬����ֵΪ����������ϵ��ָ�� 
{int i;
 struct contacts*p;
 printf("������ʽ\n");
 printf("1.����\n");
 printf("2.�绰\n");
 printf("3.qq\n");
 printf("4.������ϵ��\n");
 printf("5.�������\n");
 scanf("%d",&i);
 switch(i)
 {case 1:
 {p=searchname(head);
  return p;
 }break;
  case 2:
 {p=searchphone(head);
  return p;
 }break;
  case 3:
 {p=searchqq(head);
  return p;
 }break;
 case 4:searchalways(head);break;
 case 5:
 {p=searchmul(head);
  return p;
	 };break;
 }
 printf("�����ɹ�\n");
}

int main()
{char x;
 struct contacts*p;
 struct contacts*head;
 while(x!='h')
 {
 printf("===============���˵�==============\n");
 printf("*********a.�����µ�ͨѶ¼**********\n");
 printf("*********b.��ѯ��ϵ��**************\n");
 printf("*********c.�޸���ϵ����Ϣ**********\n");
 printf("*********d.ɾ����ϵ��**************\n");
 printf("*********e.���������ϵ����Ϣ******\n");
 printf("*********f.����������ϵ��**********\n");
 printf("*********g.�½���ϵ��**************\n");
 printf("*********h.�˳�********************\n");
 printf("===================================\n");
 printf("������ѡ�");
 scanf("\n%c",&x);
 switch(x)
 {case 'a':
 	{head=create();
 	 order(head);
 	 save(head);
 	 print(head);
	  } break;
  case 'b':
  	{head=open(head);
  	search(head);
	  }break;
  case 'c':
  	{head=open(head);
  	 p=search(head);
  	 update(p);
  	 save(head);
	  }break;
  case 'd':
  	{head=open(head);
  	 p=search(head);
  	 head=del(p,head);
  	 save(head);
	   } break;
  case 'e':
  	{head=open(head);
  	print(head);
	  }break;
  case 'f':
  	{head=open(head);
  	 putalways(head);
	  }break;
  case 'g': 
  {head=open(head);
   add(head);
   save(head);
  }break;
  case 'h':break;
 }
}
}

