#include <bits/stdc++.h>
using namespace std;
#define ii pair<ll,ll>
#define vi vector<ll>
#define ff first
#define ss second
#define vii vector<ii>
#define vvi vector<vi>
#define MOD 100000007
#define test ll T;sc(T);while(T--)
#define trace(x) cout<<x
#define trace2(x,y) cout<<x<<y
#define lf printf("\n")
#define sc(n) cin>>n;
#define sc2(n,m) cin>>n>>m
#define REP(i,n) for(ll i=0;i<n;i++)
#define ll long long int
#define all(v) (v.begin(),v.end())
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    FIO;
    test
    {
        ll N,K;
        sc2(N,K);
        string s;
        sc(s);
        ll ans=0;
        ll c=0;
        for(ll i=0;i<K;i++)
        {
            if(s[i]!=s[i+1])
                c++;
        }
        for(ll i=0;i<N-K;i++)
        {
            ans+=c;
            if(s[i]!=s[i+1])
                c--;
            if(s[i+K]!=s[i+K+1])
                c++;
        }
        //ans+=c;
        cout<<ans<<endl;
    }
    return 0;
}