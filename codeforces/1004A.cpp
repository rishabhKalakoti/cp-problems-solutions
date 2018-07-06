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

int main()
{
    ll n,d;
    sc2(n,d);
    ll a[n];
    REP(i,n) sc(a[i]);
    ll ans=2;
    sort(a,a+n);
    si s;
    REP(i,n)
    {
        if(i!=n-1)
        {
           if(abs((a[i]+d)-a[i+1])>=d)
            s.insert(a[i]+d);
        }
        if(i!=0)
        {
            if(abs((a[i]-d)-a[i-1])>=d)
            s.insert(a[i]-d);
        }
    }
    ans+=s.size();
    printf("%lli\n",ans);
    return 0;
}