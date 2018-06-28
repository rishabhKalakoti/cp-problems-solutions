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
    ll N;
    sc(N);
    ll lead=0;
    ll leadM=0;
    while(N--)
    {
        ll a,b;
        sc(a);
        sc(b);
        lead+=(a-b);
        if(abs(lead)>abs(leadM))
            leadM=lead;
    }
    if(leadM>0)
        printf("1 %lli",abs(leadM));
    else
        printf("2 %lli",abs(leadM));
	return 0;
}