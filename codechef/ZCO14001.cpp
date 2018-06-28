#include <iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define sc(a) scanf("%lli",&a)
ll maxN(ll a,ll b){if(a>b)return a;return b;}
int main() {
    ll N,H;
    sc(N);
    sc(H);
    ll A[N];
    for(ll i=0;i<N;i++)
        sc(A[i]);
    ll c;
    sc(c);
    ll i=0;
    ll box=0;
    while(c!=0)
    {
        // 1 move left
        // 2 move right
        // 3 pick
        // 4 drop
        if(c==1)
        {
            if(i!=0)
            {
                i--;
            }
        }
        else if(c==2)
        {
            if(i!=N-1)
            {
                i++;
            }
        }
        else if(c==3)
        {
            if(box==0 && A[i]>0)
            {
                box=1;
                A[i]--;
            }
        }
        else if(c==4)
        {
            if(box==1 && A[i]<H)
            {
                box=0;
                A[i]++;
            }
        }
        sc(c);
    }
    for(ll j=0;j<N;j++)
        printf("%lli ",A[j]);
	return 0;
}