#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define ll long long int
#define vi vector<ll>
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define sc(N) scanf("%lli",&N)
#define lf printf("\n")
#define vi vector<ll>
#define ii pair<ll,ll>
#define vii vector<vi>
#define REP(i,N) for(ll i=0;i<N;i++)

int main()
{
    ll n,m;
    sc(n);
    sc(m);
    ll A[n];
    ll B[m];
    ll v[n]={0};
    REP(i,n) sc(A[i]);
    REP(i,m) sc(B[i]);
    ll f=0;
    REP(i,n)
    {
        ll x=A[i];
        REP(j,m)
            if(x==B[j])
            {
                printf("%lli ",x);
                break;
            }
    }
    printf("\n");
    return 0;
}
