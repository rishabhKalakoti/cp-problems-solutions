#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define MOD 1000000007
#define sc(a) scanf("%lli",&a)
#define forep(i,N) for(ll i=0;i<N;i++)
int main() {
    ll N;
    sc(N);
    vector<ll>A(N);
    forep(i,N) sc(A[i]);
    sort(A.begin(),A.end());
    ll r=0;
    forep(i,N) r=max(r,A[i]*(N-i));
    printf("%lli",r);
    return 0;
} 