#include<stdio.h>
#define ll long long int
 
int main()
{
	ll t,n,i,j,k,temp;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		ll a[n],count[n],front[n],back[n];
		front[0] = 0;
		back[n-1] = 0;
		for(i=0;i<n;i++)
		{	
			scanf("%lld",&a[i]);
			count[i] = 0;
		}
		for(i=1;i<n;i++)
			front[i] = front[i-1] + a[i-1];
		for(i=n-2;i>=0;i--)
			back[i] = back[i+1] + a[i+1];
		
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				temp = front[j] - front[i] - a[i];
				if(temp>a[i])
					break;
			}
			for(k=i+1;k<=j-1;k++)
				count[k]++;
 
			for(j=i-1;j>=0;j--)
			{
				temp = back[j] - back[i] - a[i];
				if(temp>a[i])
					break;
			}
			for(k=j+1;k<i;k++)
				count[k]++;
		}
		for(i=0;i<n;i++)
			printf("%lld ",count[i]);
		printf("\n");
	}
return 0;
}