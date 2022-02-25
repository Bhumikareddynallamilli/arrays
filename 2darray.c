#include<stdio.h>
void main()
{
	int x[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",x[i][j]);
		}
		printf("\n");
	}
}
