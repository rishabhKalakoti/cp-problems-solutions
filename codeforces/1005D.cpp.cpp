#include <stdio.h>
#include<string.h>
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
#define N_MAX 500005
char s[200005];
ll last[2];
int main()
{
    //string s;
    //cin>>s;
    scanf("%s",s);
    ll l=strlen(s);
    ll f=0;
    ll ans=0;
    ll i=0;
    char c;
    last[0]=0;
    last[1]=0;
    for(ll i=0;i<l;i++)
    {
        int x;
        x=(s[i]-'0')%3;
        if(x==0)
        {
            ans++;
            last[0]=0;
            last[1]=0;
        }
        else
        {
            if(x==1)
            {
                if(last[0]==2 || last[1]==2)
                {
                    ans++;
                    last[0]=last[1]=0;
                }
                else
                {
                    last[1]=(last[0]+x)%3;
                    last[0]=x;
                }
            }
            else
            {
                if(last[0]==1 || last[1]==1)
                {
                    ans++;
                    last[0]=last[1]=0;
                }
                else
                {
                    last[1]=(last[0]+x)%3;
                    last[0]=x;
                }
            }
        }
    }
    printf("%lli",ans);
    return 0;
}