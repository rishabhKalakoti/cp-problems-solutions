#include <bits/stdc++.h>
using namespace std;

#define test ll T;sc(T);while(T--)
#define lf printf("\n")
#define sc(n) scanf("%lli",&n)
#define sc2(n,m) scanf("%lli%lli",&n,&m)
#define REP(i,n) for(ll i=0;i<n;i++)
#define ll long long int
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL)
#define MOD 1000000007
#define vi vector<ll>
#define ii pair<ll,ll>
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define si set<ll>
#define st string

int main()
{
    ll n;
    sc(n);
    ll a[100]={0};
    REP(i,n)
    {
        ll x;
        sc(x);
        a[x-1]++;
    }
    ll ans=0;
    REP(i,100)
    {
        ans=max(ans,a[i]);
    }
    printf("%lli",ans);
    return 0;
}