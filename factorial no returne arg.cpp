#include<stdio.h>
int fact();
int main()
{
	int n;
	n=fact();
	{
	printf("factorial=%d",n);
}
	return 0;
}
int fact()
{
	int x,fact=1,i=1;
	printf("enter no.");
	scanf("%d",&x);
	//for(i=1;i<=x;i++)
	while(i<=x)
	{
		fact=fact*i;
		i++;
	}
	return (fact);
}
