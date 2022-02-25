#include<stdio.h>
void main()
{
	int mat[10][10],row,col,i,j,sum=0;
	scanf("%d %d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	if(row==col)
	{
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				if(i!=j)
				printf("%d",mat[i][j]);
				else
				printf("0");
			}
			printf("\n");
		}
	}
	else
	{
		printf("impossible");
	}
}
