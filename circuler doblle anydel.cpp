#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev,*next;
};
typedef struct node NODE;
int main()
{
	NODE *start=NULL,*p,*q,*r,*t;
	int n,pos,i;
	printf("enter  size ");
	scanf("%d",&n);
	for(;n>0;n--)
	{
		p=(NODE*)malloc(sizeof(NODE));
		printf("enter data");
		scanf("%d",&p->data);
		if(start==NULL)
		start=p;
		else
		{
			p->prev=q;
			q->next=p;
		}
		p->next=start;
		start->prev=p;
		q=p;
    }
    q=start;
    printf("enter position");
    scanf("%d",&pos);
    for(i=1;i<pos;i++)
    {
    	q=q->next;
	}
	r=q->next;
	t=q->prev;
	t->next=r;
	r->prev=t;
    q=start;
    
		do
		{
			printf("%d",q->data);
			q=q->next;
		}while(q!=start);
	
	return 0;
}
