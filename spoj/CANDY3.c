#include <stdio.h>

int main() {
	long long int t;
	scanf("%lli",&t);
	while(t--)
	{
	    long long int n;
	    long long int s=0;
	    scanf("%lli",&n);
	    long long int n1=n;
	    long long int x;
	    while(n1--)
	    {
	        scanf("%lli",&x);
	        s=(s+x)%n;
	    }
	    if(s==0)
	        printf("YES\n");
	    else
	        printf("NO\n");
	}
	return 0;
}