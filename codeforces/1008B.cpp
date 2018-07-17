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
    vii rect;// wid,hei
    REP(i,n)
    {
        ll x,y;
        sc(x);sc(y);
        rect.pb(mp(x,y));
    }
    if(rect[0].ff > rect[0].ss)
    {
        rect[0].ss = rect[0].ff;
    }
    for(ll i=1;i<n;i++)
    {
        ll prev=rect[i-1].ss;
        if(prev >= rect[i].ss && prev >= rect[i].ff)
        {
            rect[i].ss=max(rect[i].ss,rect[i].ff);
        }
        else if(prev >= rect[i].ss)
        {
            continue;
        }
        else if(prev >= rect[i].ff)
        {
            rect[i].ss=rect[i].ff;
        }
        else
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}