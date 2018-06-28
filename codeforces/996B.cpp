#include <bits/stdc++.h>
using namespace std;
#define ii pair<ll,ll>
#define vi vector<ll>
#define ff first
#define ss second
#define vii vector<ii>
#define vvi vector<vi>
#define MOD 100000007
#define sc(n) scanf("%lli",&n)
#define REP(i,n) for(ll i=0;i<n;i++)
#define ll long long int
int main()
{
    ll n;
    ll ans=0;
    sc(n);
    ll a[n];
    ll x;
    REP(i,n)
    {   
        sc(x);
        a[i]=ceil((x-i)/(n*1.0));
    }
    ll m=1000000001;
    REP(i,n)
    {
        if(a[i] < m)
        {
            ans=i+1;
            m=a[i];
        }
    }
    printf("%lli",ans);
    return 0;
}