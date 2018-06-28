#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define MOD 1000000007
#define sc(a) scanf("%lli",&a)
#define forep(i,N) for(ll i=0;i<N;i++)
#define mp(a,b) make_pair(a,b)
#define pb(x) push_back(x)
#define ff first
#define ss second
char s[2*100000];
int main() {
    FIO;
    ll T;
    sc(T);
    while(T--)
    {
        ll N,M;
        sc(N);sc(M);
        ll r=N%M;
        if(r&1==1)
            printf("ODD\n");
        else
            printf("EVEN\n");
    }
    return 0;
}