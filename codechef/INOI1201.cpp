#include<stdio.h>
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>
#include<vector>

#define ll long long
#define forep(i,N) for(ll i=0;i<N;i++)
#define sc(N) scanf("%lli",&N)
using namespace std;
struct data
{
    ll a,b,c;
    ll sum;
};
bool cmp(data a,data b)
{
    return a.sum>b.sum;
}
int main()
{
    ll N;
    sc(N);
    vector<data> v(N);
    forep(i,N)
    {
        cin>>v[i].a>>v[i].b>>v[i].c;
        v[i].sum=v[i].b+v[i].c;
    }   
    sort(v.begin(),v.end(),cmp);
    ll ans = v[0].a+v[0].sum;
	ll prev = v[0].a;
	for(ll i=1;i<N;i++)
    {
		ans = max(ans,prev + v[i].a + v[i].sum);
		prev += v[i].a;
	}
	cout<<ans;
    return 0;
}