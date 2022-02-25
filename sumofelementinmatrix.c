#include<stdio.h>
void main()
{
	int mat[10][10],row,col,i,j,sum=0;
	scanf("%d%d",&row,&col);
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",mat[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum=sum+mat[i][j];
		}
	}
	printf("given matrix is :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d",mat[i][j]);
		}
		printf("\n");
	}
	printf("sum= %d",sum);
}
