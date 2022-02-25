#include<stdio.h>

void main()
{
	int a[2][2],b[2][2],c[2][2],i,j;
	printf("enter 4 elements in matrix a");
	for(i=0; i<2; i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter 4 elements in matrix b");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("matrix a =\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	printf("matrix b=\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",b[i][j]);
		}
	    printf("\n");
	}
	
	printf("sum of matrix a and b =\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",c[i][j]);
		}
		printf("\n");
	}   	
}
