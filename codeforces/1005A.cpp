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
    ll a[n];
    vi ans;
    ll c=0;
    ll p=-1;
    ll last=0;
    REP(i,n) sc(a[i]);
    REP(i,n)
    {
        if(a[i]==1)
            ans.pb(1);
        else
            ans[ans.size()-1]++;
    }
    printf("%lli\n",(ll)ans.size());
    REP(i,ans.size()) printf("%lli ",ans[i]); 
    return 0;
}