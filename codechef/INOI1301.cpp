#include<stdio.h>
#include<algorithm>
#include<vector>
#include<limits.h>
using namespace std;
#define ll long long int
#define forep(i,N) for(ll i=0;i<N;i++)
#define sc(N) scanf("%lli",&N)
ll N,K;
vector<ll>A;

int main()
{
    sc(N);
    sc(K);
    A.resize(N+1);
    forep(i,N)
        sc(A[i+1]);
    vector<ll>dp1(N+1),dp2(N+1);
    dp1[1]=A[1];
    ll i;
    dp1[2]=A[1]+A[2];
    for(i=3;i<=N;i++)
        dp1[i]=A[i]+max(dp1[i-1],dp1[i-2]);
    dp2[K]=0;
    dp2[K-1]=0;
    for(i=K+1;i<=N;i++)
        dp2[i]=A[i]+max(dp2[i-1],dp2[i-2]);
    ll ans = dp1[K]+dp2[K]-A[K];   
    for(i=K;i<=N;i++)
        ans = max(ans,dp1[i]+dp2[i]-A[i]);
    printf("%lli\n",ans);
    return 0;
}