#include<stdio.h>
#include<algorithm>
#include<vector>
#include<limits.h>
using namespace std;
#define ll long long int
#define forep(i,N) for(ll i=0;i<N;i++)
#define sc(N) scanf("%lli",&N)
ll N;
vector<ll>A;
vector<vector<ll>>dp;
ll rec(ll index, ll rest)
{
    if(index==N)
        return 0;
    if(rest==3)
        return INT_MAX;
    if(dp[index][rest]!=-1)
		return dp[index][rest];
	else{
        dp[index][rest]=min(A[index]+rec(index+1,0),rec(index+1,rest+1));
        return dp[index][rest];
	}   
}

int main()
{
    sc(N);
    A.resize(N);
    forep(i,N)
        sc(A[i]);
    dp.resize(N,vector<ll>(3));
    forep(i,N)
        dp[i][0]=dp[i][1]=dp[i][2]=-1;
    dp[N-1][0]=0;dp[N-1][1]=0;dp[N-1][2]=A[N-1];
    printf("%lli",rec(0,0));
    return 0;
}