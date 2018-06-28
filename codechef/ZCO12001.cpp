#include <iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<map>
#include<limits.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define sc(a) scanf("%lli",&a)
#define forep(i,N) for(ll i=0;i<N;i++)
ll maxN(ll a,ll b){if(a>b)return a;return b;}
int main() {
    ll N;
    sc(N);
    ll d=0,id=0,m=0,mMax=0,s=0,st=0;
    ll c=0;
    ll x;
    for(ll i=0;i<N;i++)
    {
        sc(x);
        if(x==1)
        {
            m++;
            c++;
            if(c==1)
            {
                s=i+1;
            }
            if(d<c)
            {
                d=c;
                id=i+1;           
            }
        }
        else
        {
            m++;
            c--;
            if(c==0)
            {
                if(m>mMax)
                {
                    st=s;
                    mMax=m;
                }
                m=0;
            }
        }
    }
    printf("%lli %lli %lli %lli",d,id,mMax,st);
    return 0;
}