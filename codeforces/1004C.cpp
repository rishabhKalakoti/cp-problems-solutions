#include <bits/stdc++.h>
using namespace std;
#define ii pair<ll,ll>
#define vi vector<ll>
#define vii vector<ii>
#define vvi vector<vi>
#define si set<ll>
#define ff first
#define ss second
#define MOD 100000007
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
#define N_MAX 100005
int main()
{
    ll n;
    sc(n);
    ll ans=0;
    ll a[n];
    ll left[N_MAX]={0};
    ll right[N_MAX]={0};
    //ll x[n]={0};
    ll y[n]={0};
    y[n-1]=0;
    REP(i,n) sc(a[i]);
    for(ll i=n-1;i>=0;i--)
    {
        if(i<n-1) y[i]=y[i+1];
        if(right[a[i]]==0) y[i]++;
        right[a[i]]=1;
    }
    for(ll i=0;i<n-1;i++)
    {
        if(left[a[i]]==0) ans+=y[i+1];
        left[a[i]]=1;
    }
    printf("%lli\n",ans);
    return 0;
}