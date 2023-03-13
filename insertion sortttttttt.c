#include<stdio.h>
int main()
{
	int a[100],n,i,j,t;
	printf("enter array size");
	scanf("%d",&n);
	printf("enter any values");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<n;i++)
	{
		t=a[i];
		j=i-1;
		while(t<a[j]&&j>=0)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=t;
	}
printf("sorted array =");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	return 0;
}
