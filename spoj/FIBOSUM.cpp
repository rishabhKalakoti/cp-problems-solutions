#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define sc(a) scanf("%lli",&a)
#define vi vector<ll>
#define vvi vector<vector<ll> >
#define MOD 1000000007
#define REP(i,N) for(ll i=0;i<N;i++)
vvi mul(vvi A,vvi B)
{
    vvi C(3,vi(3));
    REP(i,3)
        REP(j,3)
            REP(k,3)
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
int main()
{
    ll T;
    sc(T);
    vvi m={{1,1,0},
        {0,1,1},
        {0,1,0}};
    
    vi base={0,1,0};
    while(T--)
    {
        ll N,M;
        sc(N);sc(M);
        ll ans=0;
        vvi pM(3,vi(3));
        if(M>0)
        pM=mpow(m,M);
        vvi pN(3,vi(3));
        ll SM,SN;
        if(N>1)
        pN=mpow(m,N-1);
        SM=pM[0][0]*base[0]+pM[0][1]*base[1]+pM[0][2]*base[2];
        SN=pN[0][0]*base[0]+pN[0][1]*base[1]+pN[0][2]*base[2];
        ans=(SM+MOD-SN)%MOD;
        printf("%lli\n",ans);
    }
    return 0;
}