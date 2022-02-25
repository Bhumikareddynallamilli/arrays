#include<stdio.h>
void main()
{
	int size,se,flag=0;
	printf("enter the size of the array");
	scanf("%d",&size);
	int a[size],i;
	printf("enter elements in the array");
	for(i=0; i<size; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<size; i++)
	{
		printf("a[%d]index position value:%d\n",i,a[i]);
	}
	scanf("%d",&se);
	for(i=0;i<size;i++)
	{
		if(a[i]==se)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("elements found");
	}
	else
	{
		printf("element not found");
	}
}
