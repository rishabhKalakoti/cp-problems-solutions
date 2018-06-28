#include <bits/stdc++.h>
using namespace std;

#define ii pair<ll,ll>
#define vi vector<ll>
#define ff first
#define ss second
#define vii vector<ii>
#define vvi vector<vi>
#define MOD 100000007
#define trace(x) printf("%lli\n",x)
#define trace2(x,y) printf("%lli %lli",x,y)
#define lf printf("\n")
#define sc(n) scanf("%lli",&n)
#define sc2(n,m) scanf("%lli %lli",&n,&m)
#define REP(i,n) for(ll i=0;i<n;i++)
#define scArr(x,n) REP(i,n) sc(x[i])
#define ll long long int
#define all(v) (v.begin(),v.end())
#define test ll T;sc(T);while(T--)
#define pt printf
int main()
{
    ll n,M;
    sc2(n,M);
    ll a[n];
    REP(i,n) sc(a[i]);
    ll diff[n+1];
    diff[0]=a[0];
    for(ll i=1;i<n;i++) diff[i]=a[i]-a[i-1];
    diff[n]=M-a[n-1];
    //REP(i,n+1) cout<<diff[i]<<" ";
    //lf;
    ll mm=0;
    ll dp[n+1][2];
    dp[0][0]=diff[0];
    dp[0][1]=0;
    if(diff[0]>1)
    {
        ll x=0;
        x=diff[0]-1;
        dp[0][1]=max(x,dp[0][1]);
    }
    for(ll i=1;i<n;i++)
    {
        dp[i][0]=dp[i-1][0];
        if(i%2==0)
            dp[i][0]+=diff[i];
        dp[i][1]=dp[i-1][1];
        if(i%2==1)
            dp[i][1]+=diff[i];
        if(diff[i]>1)
        {
            ll x=0;
            x+=dp[i-1][0];
            x+=diff[i]-1;
            dp[i][1]=max(x,dp[i][1]);
        }
    }
    dp[n][0]=dp[n-1][0];
    
    //printf("%lli %lli ",dp[n][0],diff[n]);
    if(n%2==0)
        dp[n][0]+=diff[n];
    dp[n][1]=dp[n-1][1];
    if(n%2!=0)
        dp[n][1]+=diff[n];
    if(diff[n]>1 && (n%2==0))
    {
        ll x=0;
        x+=dp[n-1][0];
        x+=diff[n]-1;
        dp[n][1]=max(x,dp[n][1]);
    }
    cout<<max(dp[n][0],dp[n][1]);
    return 0;
}