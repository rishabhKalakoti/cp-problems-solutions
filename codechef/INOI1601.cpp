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
    ll N;
    sc(N);
    ll A[N];
    forep(i,N)
        sc(A[i]);
    ll P[N];
    ll ans=LLONG_MIN;
    forep(i,N)
        sc(P[i]);
    ll M[N];
    forep(i,N)
        M[i]=LLONG_MIN;
    vector<vector<ll> >tree(N);
    ll root;
    forep(i,N)
        if(P[i]==-1) root=i;
        else tree[P[i]-1].pb(i);
    // bfs
    queue<ll>Q;
    Q.push(root);
    M[root]=A[root];
    while(Q.size()>0)
    {
        ll v=Q.front();
        Q.pop();
        ll maxTillNow=M[v];
        forep(u,tree[v].size())
        {
            Q.push(tree[v][u]);
            M[tree[v][u]]=max(A[tree[v][u]],maxTillNow);
            ans=max(maxTillNow-A[tree[v][u]],ans);
        }
    }
    printf("%lli",ans);
    return 0;
}