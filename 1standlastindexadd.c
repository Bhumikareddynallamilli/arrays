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
	for(i=0;i<size;i++)
	{
		printf("%d",num[i]+num[size-(i+1)]);
	}
}
