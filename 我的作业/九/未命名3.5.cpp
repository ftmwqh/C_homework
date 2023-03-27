#include<stdio.h>
#include<stdlib.h>
#define len sizeof(struct man)
struct man
{
    int  data;
    struct man *next;
};
int main()
{
    struct man *head,*r,*s;
    r=head= (struct man*)malloc(len);
    int n,i;
    printf("Please input the number of people:\n");
    scanf("%d",&n);
    for(i = 1;i<=n;i++)              
    {
        s = (struct man*)malloc(len);
        s->data = i;
        r->next = s;
        r= s;
    }
    r->next =head->next;                  
    struct man*p,*q;
    p = head->next;
    while(p->next != p)                         
    {
        for(i = 1;i<2;i++)
        {   
            p = p->next;                        
        }
        q = p->next;
        printf("%d\n",q->data);
        p->next = p->next->next;    
        free(q);
        p = p->next;                 
    }
    printf("The last one :%d",p->data);
    return 0;
}

