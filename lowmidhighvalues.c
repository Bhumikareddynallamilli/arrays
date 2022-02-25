#include<stdio.h>
void main()
{
	int size,flag=0;
	scanf("%d",&size);
	int a[size],i,low,high,mid,se;
	printf("enter the elements in the array");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter searching element");
	scanf("%d",&se);
	low=0;
	high=size-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==se)
		{
			flag=1;
			break;
		}
		else if(a[mid]>se)
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	if(flag==1)
	{
		printf("element found");
	}
	else
	{
		printf("element not found");
	}
}
