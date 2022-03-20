#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],r1,c1,r2,c2,i,j,k;
	printf("enter no of rows and col in mat1\n");
	scanf("%d%d",&r1,&c1);
	printf("enter no of rows and col in mat2\n");
	scanf("%d%d",&r2,&c2);
	printf("enter the elements into a matrix\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the elements into b matrix\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	if(c1!=r2)
	{
		printf("matrix multiplication is not possible\n");
	}
	else
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				c[i][j]=0;
				for(k=0;k<c1;k++)
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}
		}
		printf("matrix multiplication is:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
