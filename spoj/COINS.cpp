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
#define N 1000000
ll dp[N]={0};
ll rec(ll n)
{
    if(n>N)
        return max(n,rec(n/2)+rec(n/3)+rec(n/4));
    if(n==0)
        return 0;
    if(dp[n]>0)
        return dp[n];
    dp[n]=max(n,rec(n/2)+rec(n/3)+rec(n/4));
    return dp[n];
}
int main()
{
    //dp[0]=0;
    //dp[1]=1;
    ll x;
    while(scanf("%lli",&x)>0)
    {
        printf("%lli\n",rec(x));
    }
    return 0;
}