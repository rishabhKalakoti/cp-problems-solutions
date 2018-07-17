#include <bits/stdc++.h>
using namespace std;
#define ii pair<ll,ll>
#define vi vector<ll>
#define ff first
#define ss second
#define vii vector<ii>
#define vvi vector<vi>
#define MOD 1000000007
#define trace(x) printf("%lli\n",x)
#define trace2(x,y) printf("%lli %lli",x,y)
#define lf printf("\n")
#define sc(n) scanf("%lli",&n)
#define sc2(n,m) scanf("%lli",&n,&m)
#define REP(i,n) for(ll i=0;i<n;i++)
#define ll long long int
#define all(v) (v.begin(),v.end())
int main()
{
    string s;
    cin>>s;
    ll len=s.length();
    ll f=0;
    for(ll i=0;i<len-1;i++)
    {
        if(s[i]!='a' && s[i]!='e'
        && s[i]!='i' && s[i]!='o'
        && s[i]!='n' && s[i]!='u')
        {
            if(s[i+1]!='a' && s[i+1]!='e' && s[i+1]!='o'
            && s[i+1]!='i' && s[i+1]!='u')
            {
                f=1;break;
            }
        }
    }
    if(f==0)
    {
        if(s[len-1]!='a' && s[len-1]!='e'
        && s[len-1]!='i' && s[len-1]!='o'
        && s[len-1]!='u' && s[len-1]!='n')
            f=1;
    }
    if(f==0)
        printf("YES");
    else
        printf("NO");
    return 0;
}