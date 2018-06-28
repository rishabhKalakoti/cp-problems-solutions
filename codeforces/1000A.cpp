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
#define sc2(n,m) scanf("%lli",&n,&m)
#define REP(i,n) for(ll i=0;i<n;i++)
#define scArr(x,n) REP(i,n) sc(x[i])
#define ll long long int
#define all(v) (v.begin(),v.end())
#define test ll T;sc(T);while(T--)
#define pt printf
int main()
{
    ll n;
    sc(n);
    string sizes[]={"XXXS","XXS","XS","S","M","L","XL","XXL","XXXL"};
    ll cnt[9]={0};
    REP(i,n)
    {
        string s;
        cin>>s;
        REP(j,9)
        {
            if(s==sizes[j])
            {
                cnt[j]++;
                break;
            }
        }
    }
    ll ans=0;
    REP(i,n)
    {
        string s;
        cin>>s;
        REP(j,9)
        {
            if(s==sizes[j])
            {
                if(cnt[j]>0)
                    cnt[j]--;
            }
        }
    }
    REP(i,9)
    {
        ans+=cnt[i];
    }
    cout<<ans;
    return 0;
}