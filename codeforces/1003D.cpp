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
    ll n,q;
    sc2(n,q);
    vi arr(33);
    for(int i=0;i<33;i++) arr[i]=0;
    REP(i,n)
    {
        ll x;
        sc(x);
        arr[(ll)log2(x)]++;
    }
    //REP(i,6) printf("%lli ",arr[i]);
    //lf;
    while(q--)
    {
        vi a=arr;
        ll x;
        sc(x);
        if(x==0){printf("0\n");continue;}
        ll c=0;
        ll m=0;
        for(ll i=31;i>=0;i--)
        {
            if((x&(1<<i))!=0)
            {
                m+=1;
                
            }
            if(a[i] < m)
            {
                m=m-a[i];
                c+=a[i];
                a[i]=0;
            }
            else if(a[i]>=m)
            {
                c+=m;
                a[i]=a[i]-m;
                m=0;
            }
            if(m>0)
                m=m<<1;
        }
        if(m>0) c=-1;
        printf("%lli\n",c);
    }
    return 0;
}