#include<stdio.h>
void main()
{
	int num[6],i;
	for(i=0;i<6;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("%d\n",num[4]+num[5]);
	printf("%d\n",num[3]-num[1]);
	printf("%d\n",num[4]*num[3]);
	printf("%d\n",num[3]/num[0]);
}
