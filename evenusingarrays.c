#include<stdio.h>
void main()
{
	int size;
	scanf("%d",&size);
	int num[size],i;
	for(i=0; i<size; i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0; i<size; i++)
	{
		if(num[i]%2 ==0)
		{
			printf("%d ",num[i]);
		}
	}
}	
