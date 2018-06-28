#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<queue>
#include<math.h>
#include<stdio.h>
#include<limits.h>
#include<math.h>
using namespace std;
#define ll long long int
#define sc(N) scanf("%lli",&N)
#define forep(i,N) for(ll i=0;i<N;i++)

int main()
{
    ll N;
    sc(N);
    vector<ll>A(N);
    forep(i,N)
        sc(A[i]);
    ll dp[N];
    dp[0]=1;
    ll ans=1;
    for(ll i=1;i<N;i++)
    {
        dp[i]=1;
        for(ll j=0;j<i;j++)
        {
            if((abs(A[i])>abs(A[j])) && (((A[i]>0) && (A[j]<0)) || ((A[i]<0) && (A[j]>0))))
                dp[i]=max(dp[i],dp[j]+1);
        }
        ans=max(ans,dp[i]);
    }
    printf("%lli",ans);
    return 0;
}