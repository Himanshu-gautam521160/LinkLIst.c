#include<stdio.h>
int main()
{
	int n;
	printf("enter size of array\n");
	scanf("%d",&n);
	int a[n],front=-1,rear=-1,ch,i,x;
	do
	{
		printf(" press 1 for insertion \n");
		printf("press 2 for deletion \n");
		printf("press 3 for traverse \n");
		printf("press 4 for exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				if(front==(rear+1)%n)
				printf(" queue is overflow\n");
				else
				{
					if(front==-1)
					{
						front=-front+1;
						rear=rear+1;
					}
					else
					rear=(rear+1)%n;
					printf("enter data\n");
					scanf("%d",&x);
					a[rear]=x;
				}
			 break;
			case 2:
				if(front==-1)
				printf(" queue is underflow\n");
				else
				{
					x=a[front];
					if(front==rear)
					{
						front=-1;
						rear=-1;
					}
					else
					front=(front+1)%n;
				}
				break;
		    case 3:
		    	if(front==-1)
		    	printf("queue is under flow");
		    	else
		    	for(i=front;i<(rear+1)%n;i++)
		    	printf("%d",a[front]);
		    	break;
		    case 4:
		    	break;
		}    while(ch!=4);
	}
	return 0;
}
