#include <iostream>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define sc(a) scanf("%lli",&a)
#define forep(i,N) for(ll i=0;i<N;i++)
ll maxN(ll a,ll b){if(a>b)return a;return b;}
int main() {
    ll N,K;
    sc(N);
    sc(K);
    vector<ll> A(N);
    forep(i,N)
        sc(A[i]);
    sort(A.begin(),A.end());
    ll v=0;
    forep(i,N)
        for(ll j=i+1;j<N;j++)
        {
            if(A[j]-A[i]>=K)
            {
                v+=N-(j);
                break;
            }
        }
    printf("%lli",v);
    return 0;
}