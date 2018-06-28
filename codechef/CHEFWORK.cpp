#include <iostream>
#include<stdio.h>
using namespace std;
#define ll long long
ll max(ll a,ll b){if(a>b) return a; return b;}
ll min(ll a,ll b){if(a<b) return a; return b;}
int main() {
    ll N;
    scanf("%lli",&N);
    ll v[N];
    for(ll i=0;i<N;i++)
        scanf("%lli",&v[i]);
    ll a=0,b=0,c=0;
    for(ll i=0;i<N;i++)
    {
        ll x;
        scanf("%lli",&x);
        switch(x)
        {
            case 1:
                if (a==0) a=v[i];
                else a=min(a,v[i]);
                break;
            case 2:
                if (b==0) b=v[i];
                else b=min(b,v[i]);
                break;
            case 3:
                if (c==0) c=v[i];
                else c=min(c,v[i]);
                break;
        }
    }
    ll minX;
    if(a==0 || b==0)
        minX=c;
    else if(c==0)
        minX=a+b;
    else
        minX=min(a+b,c);
    printf("%lli\n", minX);
	return 0;
}