#include <bits/stdc++.h>
using namespace std;
#define ii pair<ll,ll>
#define vi vector<ll>
#define vii vector<ii>
#define vvi vector<vi>
#define si set<ll>
#define ff first
#define ss second
#define MOD 1000000007
#define trace(x) printf("%lli ",x)
#define lf printf("\n")
#define test ll T;sc(T);while(T--)
#define sc(n) scanf("%lli",&n)
#define sc2(n,m) scanf("%lli %lli",&n,&m)
#define REP(i,n) for(ll i=0;i<n;i++)
#define ll long long int
#define all(v) v.begin(),v.end()
#define pb push_back
#define mp make_pair
#define N_MAX 5002
ll fac[N_MAX];
ll power(ll x, ll y)
{
    ll res = 1;
    x = x % MOD;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % MOD;
        y = y>>1;
        x = (x*x) % MOD;  
    }
    return res;
}
ll modInverse(ll n, ll p)
{
    return power(n, p-2);
}
ll nCrModPFermat(ll n, ll r)
{
   if (r==0)
      return 1;
    return (fac[n]* modInverse(fac[r], MOD) % MOD *
            modInverse(fac[n-r], MOD) % MOD) % MOD;
}
int main()
{
    fac[0] = 1;
    for (ll i=1 ; i<N_MAX; i++)
        fac[i] = (fac[i-1]*i)%MOD;
    
    ll c[N_MAX][N_MAX];
    REP(i,N_MAX) REP(j,N_MAX) c[i][j]=0;
    REP(i,N_MAX) c[i][0]=1;
    
    for(ll i=1;i<N_MAX;i++)
        for(ll j=1;j<N_MAX && j<=i;j++)
            //c[i][j]=nCrModPFermat();
            //c[i][j]=((c[i-1][j])+(c[i-1][j-1]));
            c[i][j]=((c[i-1][j])+(c[i-1][j-1]))%(MOD-1);
    
    
    test{
        ll N,K;
        sc2(N,K);
        ll a[N+1];
        a[0]=0;
        REP(i,N) sc(a[i+1]);
        sort(a,a+N+1);
        ll ans=1;
        for(ll i=2;i<=N-1;i++)
        {
            ll t=0;
            for(ll j=1;j<i && j<K-1;j++)
            {
                t+=((c[i-1][j])*(c[N-i][K-1-j]))%(MOD-1);
                t=t%(MOD-1);
            }
            ans=ans*power(a[i],t);
            ans=ans%MOD;
        }
        printf("%lli\n",(ll)ans);
    }
    return 0;
}