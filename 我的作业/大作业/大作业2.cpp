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
};//建立联系人结构体 
int n;
struct contacts*create(void)//创建初始联系人，返回链表头地址 
{struct contacts*head,*p1,*p2;
 n=0;
 p1=p2=(struct contacts*)malloc(len);
 head=NULL;
 printf("输入over表示完成\n");
  printf("姓名:\n");                scanf("%s",p1->name);
  printf("电话:\n");                scanf("\n%s",p1->phone);
  printf("qq:\n");                  scanf("\n%s",p1->qq);
  printf("是否为常用联系人：\n ");  scanf("\n%s",p1->always);
 while(strcmp(p1->name,"over")!=0)
 {n=n+1;
  if(n==1)head=p1;
  else p2->next=p1;
  p2=p1;
  p1=(struct contacts*)malloc(len);
  printf("姓名:\n");                scanf("\n%s",p1->name);
  if(strcmp(p1->name,"over")==0)break;
  printf("电话:\n");                scanf("\n%s",p1->phone);
  printf("qq:\n");                  scanf("\n%s",p1->qq);
  printf("是否为常用联系人：\n ");  scanf("\n%s",p1->always);
 }
 p2->next=NULL;
 return(head);
}
void print(struct contacts*head)//打印出联系人信息，参数为链表头地址 
{struct contacts*p;
 if(head!=NULL)
 {p=head;
  printf("共有%d人\n",n);
  printf("姓名------电话-----------qq----------是否常用\n");
  do
  {printf("%-10s%-15s%-12s%-5s\n",p->name,p->phone,p->qq,p->always);
  p=p->next;
  }while(p!=NULL);
  printf("=============================================\n");
 }
 else printf("通讯录为空\n");
}
struct contacts*add(struct contacts*head)//新建联系人 ，参数为链表头地址，返回链表头地址 
{struct contacts*p,*p1,*p2;
 p1=head;
 p=(struct contacts*)malloc(len);
  printf("姓名:\n");                scanf("%s",p->name);
  printf("电话:\n");                scanf("\n%s",p->phone);
  printf("qq:\n");                  scanf("\n%s",p->qq);
  printf("是否为常用联系人：\n ");  scanf("\n%s",p->always);
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
void order(struct contacts*head)//对联系人按姓名排序，参数为链表头地址 
{struct contacts*p,*s;
 struct contacts a;
 int j,i;
 for(i=0;i<n-1;i++)//冒泡法进行排序 
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
struct contacts*searchname(struct contacts*head)//按姓名搜索联系人 
{struct contacts*p;
 p=head;
 int i;
 char a[20];
 printf("请输入要查找的姓名：");
 scanf("%s",a);
 printf("姓名------电话-----------qq----------是否常用\n");
 while(p!=NULL)
 {if(strcmp(p->name,a)==0)break;
  p=p->next;
 }
 printf("%-10s%-15s%-12s%-5s\n",p->name,p->phone,p->qq,p->always);
 return p;
}
struct contacts*searchphone(struct contacts*head)//按电话搜索联系人 
{struct contacts*p;
 p=head;
 int i;
 char a[20];
 printf("请输入要查找的电话：");
 scanf("%s",a);
 printf("姓名------电话-----------qq----------是否常用\n");
 while(p!=NULL)
 {if(strcmp(p->phone,a)==0)break;
  p=p->next;
 }
 printf("%-10s%-15s%-12s%-5s\n",p->name,p->phone,p->qq,p->always);
 return p;
}
struct contacts*searchqq(struct contacts*head)//按qq搜索联系人 
{struct contacts*p;
 p=head;
 int i;
 char a[20];
 printf("请输入要查找的qq：");
 scanf("%s",a);
 printf("姓名------电话-----------qq----------是否常用\n");
 while(p!=NULL)
 {if(strcmp(p->qq,a)==0)break;
  p=p->next;
 }
 printf("%-10s%-15s%-12s%-5s\n",p->name,p->phone,p->qq,p->always);
 return p;
}
void searchalways(struct contacts*head)//搜索常用联系人函数，参数为链表头指针 
{struct contacts*p;
 p=head;
 printf("姓名------电话-----------qq----------是否常用\n");
 while(p!=NULL)
 {if(strcmp(p->always,"yes")==0)
  printf("%-10s%-15s%-12s%-5s\n",p->name,p->phone,p->qq,p->always);
  p=p->next;
 }
}
struct contacts*searchmul(struct contacts*head)//组合条件查询，参数为头指针，返回值为搜索到的联系人指针； 
{struct contacts guy;
 struct contacts*p;
 printf("请输入姓名，电话,qq,是否为常用联系人(不知道的输入none,中间用空格隔开):\n");
 scanf("%s %s %s %s",guy.name,guy.phone,guy.qq,guy.always);
 p=head;
 printf("姓名------电话-----------qq----------是否常用\n");
 while(p!=NULL)
 {if((strcmp("none",guy.name)==0||strcmp(p->name,guy.name)==0)&&(strcmp("none",guy.phone)==0||strcmp(p->phone,guy.phone)==0)&&(strcmp("none",guy.qq)==0||strcmp(p->qq,guy.qq)==0)&&(strcmp("none",guy.always)==0||strcmp(p->always,guy.always)==0))
  {printf("%-10s%-15s%-12s%-5s\n",p->name,p->phone,p->qq,p->always);
   break;
  }
  p=p->next;
 }
  return p;
}
struct contacts*del(struct contacts*p,struct contacts*head)//删除已搜索到的联系人 ，参数为已搜索的联系人指针 和链表头指针 
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
 printf("已删除\n");
 return head;
}
void update(struct contacts*p)//修改信息函数，参数为已搜索的联系人指针 
{int i;
 printf("请输入修改项目：1.姓名 2.电话 3.qq 4.是否为常用联系人\n");
 scanf("%d",&i);
 switch(i)
 {case 1:printf("姓名:\n");                scanf("\n%s",p->name);break;
  case 2:printf("电话:\n");                scanf("\n%s",p->phone);break;
  case 3:printf("qq:\n");                  scanf("\n%s",p->qq);break;
  case 4:printf("是否为常用联系人：\n ");  scanf("\n%s",p->always);break;
 }
 printf("已修改\n");
}
void save(struct contacts*head)//保存联系人信息到文件中，参数为头指针 
{FILE*fp;
 struct contacts*p;
 p=head;
 fp=fopen("通讯录.txt","w");
 p=head;
 while(p!=NULL)
 {fprintf(fp,"%s %s %s %s\n",p->name,p->phone,p->qq,p->always);
  p=p->next;
 }
 printf("已保存\n");
 fclose(fp);
}
struct contacts*open(struct contacts*head)//打开通讯录文件函数，参数为头指针，返回值为将文件输入后新建立的链表头指针 
{FILE*fp;
 struct contacts*p1,*p2;
 if((fp=fopen("通讯录.txt","r"))==NULL)
 {printf("打不开\n");
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
 printf("已打开\n");
 return head;
 fclose(fp);
}
void putalways(struct contacts*head)//导出常用联系人信息，参数为头指针 
{FILE*fp;
 struct contacts*p;
 fp=fopen("常用联系人.txt","w");
 p=head;
 fprintf(fp,"姓名------电话-----------qq----------是否常用\n");
 while(p!=NULL)
 {if(strcmp(p->always,"yes")==0)
  fprintf(fp,"%-10s%-15s%-12s%-5s\n",p->name,p->phone,p->qq,p->always);
  p=p->next;
 }
 printf("已导出\n");
 fclose(fp);
}
struct contacts*search(struct contacts*head)//选择搜索方式函数，参数为链表头指针，返回值为搜索到的联系人指针 
{int i;
 struct contacts*p;
 printf("搜索方式\n");
 printf("1.姓名\n");
 printf("2.电话\n");
 printf("3.qq\n");
 printf("4.常用联系人\n");
 printf("5.组合搜索\n");
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
 printf("搜索成功\n");
}

int main()
{char x;
 struct contacts*p;
 struct contacts*head;
 while(x!='h')
 {
 printf("===============主菜单==============\n");
 printf("*********a.创建新的通讯录**********\n");
 printf("*********b.查询联系人**************\n");
 printf("*********c.修改联系人信息**********\n");
 printf("*********d.删除联系人**************\n");
 printf("*********e.浏览所有联系人信息******\n");
 printf("*********f.导出常用联系人**********\n");
 printf("*********g.新建联系人**************\n");
 printf("*********h.退出********************\n");
 printf("===================================\n");
 printf("请输入选项：");
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

