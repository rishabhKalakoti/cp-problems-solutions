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
    ll n;
    sc(n);
    ll A[n];
    ll min=1001;
    ll id=0;
    REP(i,n)
    {
        sc(A[i]);
        if(A[i]<min)
        {
            min=A[i]; id=i+1;
        }
    }
    if(n==1)
        printf("-1\n");
    else if(n==2 && (A[0]==A[1]))
        printf("-1\n");
    else
    {
        printf("1\n%lli\n",id);
    }
    return 0;
}