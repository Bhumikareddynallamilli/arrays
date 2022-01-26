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
	int is_even=1;
	for(i=0; i<size; i++)
	{
		if(num[i]%2 ==1)
		{
			is_even =0;
			break;
		}
	}
	if(is_even ==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
