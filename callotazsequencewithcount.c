#include<stdio.h>
void main()
{
	int n,count = 0;
	scanf("%d", &n);
	while(n>1)
	{
		if(n%2 ==0)
		{
			n=n/2;
		}
		else
		{
			n=3*n+1;
		}
		printf("%d ",n);
		count++;
	}
	printf("\n no. of steps taken is %d",count);
}
