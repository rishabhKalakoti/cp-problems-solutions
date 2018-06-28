#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define test ll t;scanf("%lli",&t);while(t--)
#define ii pair<ll,ll>
#define vi vector<ll>

int main()
{
    ll n;
    string s;
    cin>>n>>s;
    vi divisors;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
            {
                divisors.push_back(i);
            }
            else
            {
                divisors.push_back(i);
                divisors.push_back(n/i);
            }
        }
    }
    //printf("%i ",divisors.size());
    sort(divisors.begin(),divisors.end());
    for(ll i=0;i<divisors.size();i++)
    {
        reverse(s.begin(),s.begin()+divisors[i]);
    }
    cout<<s;
    return 0;
}