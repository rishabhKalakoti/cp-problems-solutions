#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define MOD 1000000007
#define sc(a) scanf("%lli",&a)
#define forep(i,N) for(ll i=0;i<N;i++)
#define mp(a,b) make_pair(a,b)
#define ff first
#define ss second

int main() {
    ll N;
    sc(N);
    ll A[N];
    ll r=0;
    forep(i,N)
    {
        sc(A[i]);
    }
    sort(A,A+N);
    ll B[N];
    B[0]=A[0];
    forep(i,N-1)
    {
        B[i+1]=A[i+1]+B[i];
    }
    forep(i,N-1)
    {
        r+=B[N-1]-B[i]-(N-1-i)*A[i];
    }
    printf("%lli",r);
    return 0;
}