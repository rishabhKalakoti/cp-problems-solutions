#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n;
	scanf("%lli",&n);
	set<ll>s;
	for(ll i=0;i<n;i++)
	{
		ll x;
		scanf("%lli",&x);
		if(x!=0)
			s.insert(x);
	}
	ll ans=s.size();
	printf("%lli",ans);
}