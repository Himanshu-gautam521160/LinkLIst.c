#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
int main()
{
	NODE *p,*q,*start=NULL,*r;
	int n,s,i,pos;
	printf("enter make the node");
	scanf("%d",&n);
	for(;n>0;n--)
	{
		p=(NODE*)malloc(sizeof(NODE));
		printf("enter data");
		scanf("%d",&p->data);
		if(start==NULL)
		start=p;
		else
		q->next=p;
		p->next=start;
		q=p;
}
	q=start;
	printf("\nenter position for deletion");
	scanf("%d",&pos);
	for(i=1;i<pos;i++)
	{
		r=q;
		q=q->next;
	}
	r->next=q->next;
	free(q);
	
	q=start;
	
	do
	{
		printf("%d",q->data);
		q=q->next;
	}while(q!=start);
	return 0;
	
	
}
