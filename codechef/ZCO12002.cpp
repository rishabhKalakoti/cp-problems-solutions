#include <iostream>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<limits.h>
#include<algorithm>
using namespace std;
#define ll long long int
#define MOD 1000000007
#define sc(a) scanf("%lli",&a)
#define forep(i,N) for(ll i=0;i<N;i++)
ll minN(ll a,ll b){if(a<b)return a;return b;}
int main() {
    ll N,X,Y;
    sc(N);
    sc(X);
    sc(Y);
    pair<ll,ll> contest[N];
    ll st[X];
    vector<ll> end(Y);
    ll a,b;
    forep(i,N)
    {
        sc(a);
        sc(b);
        contest[i]=make_pair(a,b);
    }
    forep(i,X)
        sc(st[i]);
    forep(i,Y)
        sc(end[i]);
    sort(st,st+X);
    sort(end.begin(),end.end());
    sort(contest,contest+N);
    ll t=0;
    ll minT=LLONG_MAX;
    ll j=0, k=0;
    forep(i,N)
    {
        ll s=contest[i].first;
        ll e=contest[i].second;
        while(j<X-1 && st[j]<=s && !(st[j+1]>s))
            j++;
        k=lower_bound(end.begin(),end.end(),e)-end.begin();
        if(j==X)
            break;
        if(k==Y)
            continue;
        if(st[j]>s || end[k]<e)
            continue;
        t=end[k]-st[j]+1;
        minT=minN(minT,t);
    }
    printf("%lli",minT);
    return 0;
}