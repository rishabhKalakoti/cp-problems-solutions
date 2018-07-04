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
#define vi vector<ll>
#define vvi vector<vector<ll> >
#define ii pair<ll,ll>
#define msi map<string,ll>
vvi edge(1000100);
vi visited(1000100);
ll tree;
int dfs(ll n,ll p)
{
    visited[n]=1;
    for(ll i=0;i<edge[n].size();i++)
    {
        if(visited[edge[n][i]]==0)
            dfs(edge[n][i],n);
        else if(edge[n][i]!=p)
            tree=0;
    }
}
int main() {
    // input
    ll m,n;
    sc(n);sc(m);
    forep(i,m)
    {
        ll a,b;
        sc(a);sc(b);
        edge[a].pb(b);
        edge[b].pb(a);
    }
    // dfs
    ll c=0;
    for(ll i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
           tree=1;
           dfs(i,0); 
           if(tree==1)
            c++;
        }
    }
    printf("%lli",c);
    return 0;
}
