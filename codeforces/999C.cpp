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
    char s[n];
    scanf("%s",s);
    ll cnt[26];
    for(ll i=0;i<26;i++) cnt[i]=0;
    for(ll i=0;i<n;i++)
        cnt[s[i]-'a']++;
    ll j=0;
    char c='a';
    for(ll i=0;i<k;)
    {
        while(cnt[c-'a']==0)
        {
            c++;
            j=0;
        }
        if(s[j]==c)
        {
            s[j]='0';
            cnt[c-'a']--;
            i++;
        }
        if(j==n-1)
            j=0;
        else
            j++;
    }
    for(ll i=0;i<n;i++)
    {
        if(s[i]!='0')
            printf("%c",s[i]);
    }
    return 0;
}