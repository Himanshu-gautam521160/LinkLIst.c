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
	NODE *start=NULL,*p,*q,*r;
	int n;
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
    while(q->next!=start)
    {
    	r=q;
    	q=q->next;
	}
    r->next=start;
    start->prev=r;
    free(q);
    q=start;
    
		do
		{
			printf("%d",q->data);
			q=q->next;
		}while(q!=start);
	
	return 0;
}
