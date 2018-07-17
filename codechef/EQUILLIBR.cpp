#include <bits/stdc++.h>
using namespace std;
#define ii pair<ll,ll>
#define vi vector<ll>
#define vii vector<ii>
#define vvi vector<vi>
#define si set<ll>
#define ff first
#define ss second
#define MOD 1000000007
#define trace(x) printf("%lli\n",x)
#define trace2(x,y) printf("%lli %lli\n",x,y)
#define lf printf("\n")
#define test ll T;sc(T);while(T--)
#define sc(n) scanf("%lli",&n)
#define sc2(n,m) scanf("%lli %lli",&n,&m)
#define REP(i,n) for(ll i=0;i<n;i++)
#define ll long long int
#define all(v) v.begin(),v.end()
#define pb push_back
#define mp make_pair

ll qpowmod(ll a, ll b, ll mod)
{
	ll res=1;
	while(b)
	{
		if(b&1)
			res=res*a%mod;
		a=a*a%mod;
		b>>=1;
	}
	return res;
}
int main()
{
    ll n,k;
    sc(n);sc(k);
    ll m = MOD;
    ll p = qpowmod(2,n-1,m);
    p=p-n;
    if(p<0) p+=m;
    ll q = qpowmod(2,n-1,m);
    ll ans=qpowmod(q, m-2,m);
    ans=(ans*p)%m;
    printf("%lli",ans);
    return 0;
}