#include<stdio.h>
int main()
{
	long long unsigned int T;
	scanf("%llu", &T);
	while(T--)
	{
		long long unsigned int x,y;
		scanf("%llu %llu", &x, &y);
		if(x<0 || y<0)
			printf("No Number/n");
		else if(x==y)
		{
			if(x%2==0)
			{
				printf("%llu\n", x*2);
			}
			else
			{
				printf("%llu\n", x*2-1);
			}
		}
		else if(y==x-2)
		{
			if(x%2==0)
			{
				printf("%llu\n", x*2-2);
			}
			else
			{
				printf("%llu\n", x*2-3);
			}
		}
		else
		{
			printf("No Number\n");
		}
	}
}