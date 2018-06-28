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

int main() {
    ll N,K;
    sc(N);sc(K);
    vector<ll>A;
    forep(i,N)
    {
        ll x;
        sc(x);
        if(x<K) A.pb(x);
    }
    sort(A.begin(),A.end());
    N=A.size();
    ll ans=0;
    //forep(i,N) printf("%lli ",A[i]);
    //printf("\n");
    forep(i,N)
    {
        ll y=upper_bound(A.begin(),A.end(),K-A[i]-1)-A.begin()-1;
        if(y>i)
        {
            //printf("(%lli)",y-i);
            ans+=y-i;
        }
    }
    printf("%lli",ans);
    return 0;
}