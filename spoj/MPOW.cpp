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
#define vi vector<ll>
#define vvi vector<vector<ll> >
#define ii pair<ll,ll>
#define msi map<string,ll>
ll M;
vvi mul(vvi A,vvi B)
{
    vvi C(M+1,vi(M+1));
    forep(i,M)
        forep(j,M)
            forep(k,M)
                C[i][j] = (C[i][j]%MOD + ((A[i][k]%MOD)*(B[k][j] %MOD)))%MOD ;
    return C;
}
vvi mpow(vvi A,ll p)
{
    if(p==1)
        return A;
    vvi res=mpow(A,p/2);
    res=mul(res,res);
    if(p&1) res=mul(res,A);
    return res;
}
int main() {
    ll T;
    sc(T);
    while(T--)
    {
        ll N;
        sc(M);sc(N);
        vvi m(M+1,vi(M+1));
        forep(i,M)
            forep(j,M)
                sc(m[i][j]);
        vvi ans=mpow(m,N);
        forep(i,M)
        {
            forep(j,M) printf("%lli ",ans[i][j]);
            printf("\n");
        }
    }
   return 0;
}