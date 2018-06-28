#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define MOD 1000000007
#define sc(a) scanf("%lli",&a)
#define forep(i,N) for(ll i=0;i<N;i++)
int main() {
    ll T;
    sc(T);
    while(T--)
    {
        ll N,K;
        sc(N);
        sc(K);
        if(N==1) printf("%lli",K);
        else if(K==1) forep(i,N) printf("1 ");
        else if(K==2)
        {
            printf("2 ");
            forep(i,N-1) printf("1 ");
        }
        else if(K==3)
        {
            if(N%2==1) printf("3 ");
            else printf("2 ");
            forep(i,N-1) printf("1 ");
        }
        else
        {
            ll p=1;
            while(p<=K) p=p<<1;
            p=p>>1;
            printf("%lli ",p);
            if(N%2==0) printf("%lli ",p-1); 
            else printf("%lli ",p-2);
            forep(i,N-2) printf("1 ");
        }
        printf("\n");
    }
    return 0;
}