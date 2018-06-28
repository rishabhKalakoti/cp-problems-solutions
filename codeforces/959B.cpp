#include<stdio.h>
#include<vector>
#include<map>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k,m;
    scanf("%lli %lli %lli", &n,&k,&m);
    vector<string>v(n);
    map<string,ll>vi;
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
        vi[v[i]]=i;
    }
    vector<ll>val(n);
    for(ll i=0;i<n;i++)
        scanf("%lli",&val[i]);
    for(ll i=0; i<k;i++)
    {
        ll x;
        scanf("%lli",&x);
        vector<ll>g(x);
        scanf("%lli",&g[0]);
        ll minX=val[g[0]-1];
        for(ll j=1; j<x; j++)
        {
            scanf("%lli",&g[j]);
            if(minX > val[g[j]-1])
                minX=val[g[j]-1];
        }
        for(ll j=0; j<x; j++)
        {
            val[g[j]-1]=minX;
        }
    }
    ll sum=0;
    for(ll i=0;i<m;i++)
    {
        string s;
        cin>>s;
        sum+=val[vi[s]];
    }
    printf("%lli",sum);
    return 0;
}