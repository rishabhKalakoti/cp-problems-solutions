#include <stdio.h>
#include <math.h>
int main(void) {
	long unsigned int q;
	scanf("%ld", &q);
	for(long unsigned int i=0; i<q; i++)
	{
		long unsigned int m,n;
		scanf("%ld %ld", &m, &n);
		for(long unsigned int j=m; j<=n; j++)
		{
			if(j==2)
				printf("2\n");	
			if(j>2 && j%2!=0)
			{
				int flag=0;
				for(long unsigned int k=2; k<=sqrt(j) && k<j; k++)
				{
					if(j%k==0)
					{
						flag=1;
						break;
					}
				}
				if(flag==0)
				{
					printf("%ld\n", j);
				}
			}
		}
		printf("\n");
	}
	return 0;
}