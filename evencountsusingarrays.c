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
	int count=0;
	for(i=0; i<size; i++)
	{
		if(num[i]%2 ==0)
		{
			count++;
		}
	}
	printf("%d",count);
}
