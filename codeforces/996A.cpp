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
    // 1,5,10,20,100
    ans+=n/100;
    n=n%100;
    ans+=n/20;
    n=n%20;
    ans+=n/10;
    n=n%10;
    ans+=n/5;
    n=n%5;
    ans+=n;
    printf("%lli",ans);
    return 0;
}