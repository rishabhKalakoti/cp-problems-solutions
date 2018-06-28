#include<stdio.h>
#define ll long long int
int main() {
	ll T;
	scanf("%lli",&T);
	double loss;
	while(T--)
	{
	    ll N;
	    scanf("%lli",&N);
	    loss=0.0;
	    while(N--)
	    {
	        ll p,q,d;
	        scanf("%lli %lli %lli", &p,&q,&d);
	        loss=loss + (p*q*d*d*1.0)/(10000*1.0);
	    }
	    printf("%lf\n",loss);
	}
	return 0;
}