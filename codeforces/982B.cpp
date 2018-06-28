#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<queue>
#include<math.h>
#include<stdio.h>
#include<limits.h>

using namespace std;
#define ll long long int
#define sc(N) scanf("%lli",&N)
#define forep(i,N) for(ll i=0;i<N;i++)

int main()
{
    ll N;
    sc(N);
    priority_queue<ll,vector<ll>,greater<ll>>A;
    priority_queue<ll>B;
    map<ll,ll>m;
    forep(i,N)
    {
        ll x;
        sc(x);
        m[x]=i;
        A.push(x);
    }
    string s;
    ll p[2*N];
    ll seats[2*N];
    cin>>s;
    //scanf("%s",A);
    for(ll i=0;i<2*N;i++)
        p[i]=s[i]-'0';
    ll intro=0,extro=0;
    for(ll i=0;i<2*N;i++)
    {
        if(p[i]==0)
        {
            seats[i]=m[A.top()]+1;
            B.push(A.top());
            intro++;
            A.pop();
        }
        else
        {
            seats[i]=m[B.top()]+1;
            B.pop();
            extro++;
        }
    }
    for(ll i=0;i<2*N;i++)
        printf("%lli ",seats[i]);
    return 0;
}