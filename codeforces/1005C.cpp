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
#define N_MAX 500005
int main()
{
    ll n;
    sc(n);
    ll a[n];
    map<ll,ll>m;
    REP(i,n){
        sc(a[i]);
        if(m.count(a[i])==0)
            m.insert(mp(a[i],1));
        else
            m[a[i]]++;
    }
    //printf("%lli\n",m.size());
    ll ans=0;
    REP(i,n)
    {
        ll f;
        f=0;
        for(ll j=0;j<31;j++)
        {
            ll x=(1<<j)-a[i];
            //printf("%lli %lli\n",a[i],x);
            if(x==a[i] || x==0)
            {
                //printf("x%lli\n",m[a[i]]);
                if(m[a[i]]>1)
                {
                    //printf("%lli %lli\n",a[i],x);
                    ans++;
                    f=1;
                 }
            }
            else if(x!=a[i])
            {
                //printf("x%lli\n",m[x]);
                if(m[x]>0)
                {
                    //printf("%lli %lli\n",a[i],x);
                    ans++;
                    f=1;
                }
            }
            if(f==1)
                break;
        }
    }
    printf("%lli",n-ans);
    return 0;
}