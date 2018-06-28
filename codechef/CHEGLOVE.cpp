#include <iostream>
#include<stdio.h>
using namespace std;
#define ll long long int
int main() {
	ll T;
	scanf("%llu",&T);
	while(T--)
	{
	    ll N;
	    scanf("%llu",&N);
	    ll F[N];
	    ll G[N];
	    for(ll i=0; i<N;i++)
	    {
	        scanf("%llu", &F[i]);
	    }
	    for(ll i=0; i<N;i++)
	    {
	        scanf("%llu", &G[i]);
	    }
	    int f=3;
	    for(ll i=0; i<N;i++)
	    {
	        if(F[i]>G[i])
	        {
	            f=f-1;
	            break;
	        }
	    }
	    for(ll i=0; i<N;i++)
	    {
	        if(F[i]>G[N-1-i])
	        {
	            f=f-2;
	            break;
	        }
	    }
	    if(f==3)
	        printf("both\n");
	    else if(f==2)
	        printf("back\n");
	    else if(f==1)
	        printf("front\n");
	    else
	        printf("none\n");
	}
	return 0;
}
 