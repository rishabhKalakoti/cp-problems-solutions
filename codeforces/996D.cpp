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
    ll a[2*n];
    ll v[2*n];
    REP(i,2*n)
    {
        v[i]=0;
        sc(a[i]);
    }
    REP(i,2*n)
    {
        ll x;
        if(v[i]==0)
        {
            x=a[i];
            v[i]=1;
            for(ll j=i+1;j<2*n;j++)
            {
                //printf("x");
                if(a[j]==x)
                {
                    v[j]=1;
                    break;
                }
                if(v[j]==0)
                {
                    //printf("%lli ",j);
                    ans++;
                }
            }
        }
    }
    printf("%lli",ans);
    return 0;
}