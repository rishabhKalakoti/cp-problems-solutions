#include<iostream>
#include<stdio.h>
#include<string.h>
#include<map>
#include<vector>
#include<iterator>
using namespace std;
 
#define ll long long int
#define llu long long unsigned int
 
ll maxN(ll a, ll b)
{
    if(a>b)
        return a;
    else
        return b;
}
 
int main() {
    ll T;
    scanf("%lli",&T);
    while(T--)
    {
        ll N;
        scanf("%lli",&N);
        ll max=0;
        for(ll i=0;i<N;i++)
        {
            ll x;
            scanf("%lli",&x);
            max=maxN(max,x);
        }
        ll C,D,S;
        scanf("%lli %lli %lli",&C,&D,&S);
        
        printf("%lli\n",(C-1)*max);
    }
	return 0;
}  