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

int main()
{
    sc(N);
    A.resize(N);
    forep(i,N)
        sc(A[i]);
    vector<ll>cost(N);
    cost[0]=A[0];
    cost[1]=A[1];
    for(ll i=2;i<N;i++)
    {
        cost[i]=INT_MAX;
        for(ll j=1;j<=2;j++)
        {
            if(i-j>=0)
                cost[i]=min(cost[i],A[i]+cost[i-j]);
            else
                cost[i]=A[i];
        }
    }
    vector<ll>cost1(N);
    cost1[0]=A[0];
    cost1[1]=A[0]+A[1];
    cost1[2]=A[0]+A[2];
    for(ll i=3;i<N;i++)
    {
        cost1[i]=INT_MAX;
        for(ll j=1;j<=2;j++)
        {
            if(i-j>=0)
                cost1[i]=min(cost1[i],A[i]+cost1[i-j]);
            else
                cost1[i]=A[i];
        }
    }
    printf("%lli",min(min(cost1[N-1],cost1[N-2]),cost[N-1]));
    return 0;
}