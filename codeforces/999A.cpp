#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define test ll t;scanf("%lli",&t);while(t--)
#define ii pair<ll,ll>
#define vi vector<ll>

int main()
{
    ll n,k;
    cin>>n>>k;
    ll A[n];
    for(ll i=0;i<n;i++)
    {
        cin>>A[i];
    }
    ll ans=0;
    ll j=0;
    for(ll i=0;i<n;i++)
    {
        if(A[i]>k)
            break;
        ans++;
        j=i;
    }
    for(ll i=n-1;i>j;i--)
    {
        if(A[i]>k)
            break;
        ans++;
    }
    cout<<ans;
    return 0;
}