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
	for(i=size-1; i>=0; i--)
	{
		
		printf("%d",num[i]);
	}
}
