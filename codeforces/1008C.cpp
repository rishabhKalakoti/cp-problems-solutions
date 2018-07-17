#include <bits/stdc++.h>
using namespace std;
#define ii pair<ll,ll>
#define vi vector<ll>
#define ff first
#define ss second
#define vii vector<ii>
#define vvi vector<vi>
#define MOD 1000000007
#define trace(x) printf("%lli\n",x)
#define trace2(x,y) printf("%lli %lli",x,y)
#define lf printf("\n")
#define sc(n) scanf("%lli",&n)
#define sc2(n,m) scanf("%lli",&n,&m)
#define REP(i,n) for(ll i=0;i<n;i++)
#define ll long long int
#define all(v) (v.begin(),v.end())
#define pb push_back
#define mp make_pair
int main()
{
    ll n;
    sc(n);
    ll a[n];
    REP(i,n) sc(a[i]);
    map<ll,ll>m;
    REP(i,n) m[a[i]]++;
    vii v;
    for(auto it=m.begin();it!=m.end();it++)
    {
        v.pb(mp(it->ff,it->ss));
    }
    sort(v.begin(),v.end());
    ll ans=0;
    for(ll i=0; i<v.size()-1;i++)
    {
        ans+=min(v[i].ss,v[i+1].ss);
        v[i+1].ss=max(v[i].ss,v[i+1].ss);
    }
    printf("%lli",ans);
    return 0;
}