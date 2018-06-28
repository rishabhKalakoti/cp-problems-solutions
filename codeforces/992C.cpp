#include <iostream>
using namespace std;
#define ll long long int
#define MOD 1000000007
ll p(ll x)
{
    if(x==0)
        return 1;
    ll q=p(x/2);
    q=(q*q)%MOD;
    if(x%2==1)
        q=(q*2)%MOD;
    return q;
        
}
int main()
{
    ll x,k;
    cin>>x>>k;
    ll ans;
    ans=(2*x-1)%MOD;
    ans=(ans*p(k))%MOD;
    ans++;
    if(ans>=MOD)
    ans-=MOD;
    if(k==0)
        ans=(2*x)%MOD;
    if(x==0)
        ans=0;
    cout<<ans;
    return 0;
}