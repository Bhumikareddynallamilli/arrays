#include<stdio.h>
void main()
{
	int marks[6],i,tot=0;
	for(i=0;i<6;i++)
	{
		scanf("%d",&marks[i]);
		tot=tot+marks[i];
	}
	printf("%d",tot);
}
