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
    ll n,B;
    sc2(n,B);
    ll a[n];
    ll e[n],o[n];
    e[0]=0;
    o[0]=0;
    REP(i,n){
        sc(a[i]);
        if(i>0)
        {
            o[i]=o[i-1];
            e[i]=e[i-1];
        }
        if(a[i]%2==0)
            e[i]++;
        else
            o[i]++;
    }
    vi x;
    REP(i,n-1)
    {
        if(e[i]==o[i])
        {
         x.pb(abs(a[i+1]-a[i]));
        }
    }
    sort(x.begin(),x.end());
    ll ans=0;
    REP(i,x.size())
    {
        if(x[i]<=B)
        {
            ans++;
            B=B-x[i];
        }
    }
    printf("%lli",ans);
    return 0;
}