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
    // input
    ll N1,N2,N3;
    sc(N1);
    sc(N2);
    sc(N3);
    map<ll,ll>m;
    ll x;
    ll c=0;
    vector<ll>v;
    forep(i,N1+N2+N3)
    {
        sc(x);
        m[x]++;
        if(m[x]==2)
        {
            c++;
            v.push_back(x);
        }
    }
    printf("%lli\n",c);
    sort(v.begin(),v.end());
    forep(i,v.size())
        printf("%lli\n",v[i]);
    return 0;
}