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
#define N_MAX 100005

int main()
{
    string s,t;
    cin>>s>>t;
    ll l1=s.length();
    ll l2=t.length();
    ll i=0;
    while(l1-i>0 && l2-i>0)
    {
        if(s[l1-1-i]==t[l2-1-i])
            i++;
        else
            break;
    }
    printf("%lli",l1+l2-2*i);
    return 0;
}