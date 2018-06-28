#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define MOD 1000000007
#define sc(a) scanf("%lli",&a)
#define forep(i,N) for(ll i=0;i<N;i++)
#define mp(a,b) make_pair(a,b)
#define pb(x) push_back(x)
#define ff first
#define ss second
int main() {
    // input
    ll N,K;
    sc(N);sc(K);
    vector<vector<ll> >A;
    forep(i,N)
    {
        ll n;
        sc(n);
        vector<ll>v;
        ll x;
        forep(j,n)
        {
            sc(x);
            v.pb(x);
        }
        sort(v.begin(),v.end());
        A.pb(v);
    }
    // bfs
    ll visited[N]={0};
    ll count=1;
    visited[0]=1;
    queue<ll>Q;
    Q.push(0);
    while(Q.size()>0)
    {
        ll v = Q.front();
        Q.pop();
        //check
        forep(u,N)
        {
           if(visited[u]==0) 
           {
               ll i=0,j=0,c=0;
               while(i<A[v].size() && j<A[u].size())
               {
                   if(A[v][i]<A[u][j]) i++;
                   else if (A[v][i]>A[u][j]) j++;
                   else
                   {
                       c++;i++;j++;
                   }
                   if(c==K)
                   {
                       count++;
                       visited[u]=1;
                       Q.push(u);
                       break;
                   }
               }
           }
        }
    }
    printf("%lli",count);
    return 0;
}