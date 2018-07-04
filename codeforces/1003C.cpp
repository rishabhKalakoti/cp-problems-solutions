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
    ll n,k;
    sc(n);sc(k);
    ll a[n];
    ll s[n+1];
    s[0]=0;
    REP(i,n)
    {
        sc(a[i]);
        s[i+1]=s[i]+a[i];
    }
    double ans=0.0;
    for(ll i=k;i<=n;i++)
    {
        ll sum=0;
        for(ll j=0; j+i<=n;j++)
        {
            sum=max(sum,s[j+i]-s[j]);
        }
        ans=max(ans,(sum*1.0)/(i*1.0));
    }
    printf("%.10lf",ans);
    return 0;
}