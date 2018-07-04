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
    ll a,b,x;
    sc(a);sc(b);sc(x);
    vi v;
    ll f=0;
    if(a==0)
    {
        REP(i,b) printf("1"); return 0;
    }
    if(b==0)
    {
        REP(i,a) printf("0"); return 0;
    }
    
    v.pb(0);
    a--;
    f=1;
    while(x>0)
    {
        if(f==1)
        {
            if(b==0) break;
            f=0;
            v.pb(1);
            b--;
        }
        else
        {
            if(a==0) break;
            f=1;
            v.pb(0);
            a--;
        }
        x--;
    }
    if(x==0)
    {
        REP(i,a)
        {
            printf("0");
        }
        for(ll i=0; i<v.size()-1;i++)
        {
            printf("%lli",v[i]);
        }
        if(v[v.size()-1]==0)
        {
            REP(i,b) printf("1");
            printf("0");
        }
        else
        {
            printf("1");
            REP(i,b) printf("1");
        }
    }
    else
    {
        if(b>0)
        {
            REP(i,b) printf("1");
            for(ll i=0; i<v.size()-1;i++)
            {
                printf("%lli",v[i]);
            }
            if(v[v.size()-1]==0)
            {
                printf("0");
                REP(i,a) printf("0");
            }
            else
            {
                REP(i,a) printf("0");
                printf("1");
            }
        }
        else
        {
            for(ll i=0; i<v.size();i++)
            {
                printf("%lli",v[i]);
            }
            REP(i,a) printf("0");
        }
    }
    return 0;
}