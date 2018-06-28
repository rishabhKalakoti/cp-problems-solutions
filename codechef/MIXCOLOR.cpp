#include <iostream>
#include<stdio.h>
#include<set>
using namespace std;
#define ll long long int
int main() {
	ll T;
	scanf("%llu",&T);
	while(T--)
	{
	    set<ll> s;
	    ll N;
	    ll num;
	    scanf("%llu",&N);
	    for(ll i=0; i<N;i++)
	    {
	        scanf("%llu", &num);
	        s.insert(num);
	    }
	    printf("%llu\n", N-s.size());
	}
	return 0;
}