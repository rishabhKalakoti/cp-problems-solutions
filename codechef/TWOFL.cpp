#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define MOD 1000000007
#define sc(a) scanf("%lli",&a)
#define sc2(a,b) scanf("%lli %lli",&a,&b)
#define REP(i,N) for(ll i=0;i<N;i++)
#define mp(a,b) make_pair(a,b)
#define pb(x) push_back(x)
#define ff first
#define ss second
#define vi vector<ll>
#define vvi vector<vector<ll> >
#define ii pair<ll,ll>
#define msi map<string,ll>
#define DEBUG(x) printf("%lli ",x)
#define DEBUGf(x) printf("%lf ",x)
#define lf printf("\n")

ll n,m;
vvi v;
set<ll> adj[4000000];
ll comp[2001][2001];
ll field[2001][2001];
ll vis[2001][2001];
ll rowNbr[] = {-1,0,+1,0};
ll colNbr[] = {0,+1,0,-1};
// component_id,(digit,value)
unordered_map<ll,pair<ll,ll>>value;
set<ll>s;
bool valid(ll i,ll j,ll prev){
    return i>=0 && i<n && j>=0 && j<m && vis[i][j]==0 && field[i][j]==prev;
}
void dfs(ll i,ll j,ll prev, ll component,ll &count){
    vis[i][j]=1;
    field[i][j]=component;
    for (ll k = 0; k < 4; ++k){
        ll newI=i+rowNbr[k];
        ll newJ=j+colNbr[k];
        if(valid(newI,newJ,prev)){
            count++;
            dfs(newI,newJ,prev,component,count);
        }
        else if(newI>=0 && newI<n && newJ>=0 && newJ<m && vis[newI][newJ]==1)
        {
            adj[component].insert(field[newI][newJ]);
            adj[field[newI][newJ]].insert(component);
        }
    }
}

void dfs1(ll a, ll b,ll i,ll &c)
{
    if(s.find(i)==s.end())
    {
        c+=value[i].ss;
    }
    else
        return;
    s.insert(i);
    //printf("%lli ",i);
    set<ll>::iterator it;
    for(it=adj[i].begin();it!=adj[i].end();it++)
    {
        ll d=distance(adj[i].begin(),it);
        ll comp=*it;
        if(v[i][d]==0 && (value[comp].ff==a || value[comp].ff==b))
        {
            v[i][d]=1;
            v[comp][distance(adj[comp].begin(),adj[comp].find(i))]=1;
            dfs1(a,b,comp,c);
        }
    }
}

int main(){
    sc2(n,m);     // the number stored in a cell
    REP(i,n) REP(j,m) sc(field[i][j]);
    REP(i,n) REP(j,m) vis[i][j]=0;
    // store the components
    ll ans=0;
    ll component=0;
    REP(i,n){
        REP(j,m){
            if(vis[i][j]==0){
                ll count=1;
                ll prev=field[i][j];
                dfs(i,j,prev,component,count);
                value[component]=mp(prev,count);
                ans=max(ans,count);
                component++;
            }
        }
    }
    // REP(i,n){REP(j,m) printf("%2lli ",field[i][j]); printf("\n");}
    for(ll i=0;i<component;i++)
    {
        vi vx;
        vx.resize(adj[i].size(),0);
        v.pb(vx);
    }
    /*
    if(m>1001 || n>1001)
        return 0;
    */
    s.clear();
    for(ll i=0;i<component;i++)
    {
        set<ll>::iterator it;
        for(it=adj[i].begin(); it!=adj[i].end();it++)
        {
            ll j=distance(adj[i].begin(),it);
            if(v[i][j]==0)
            {
                ll a=value[i].ff;
                ll b=value[*it].ff;
                ll c=0;
                dfs1(a,b,i,c);
                s.clear();
                ans=max(ans,c);
            }
        }
    }
    printf("%lli",ans);
    return 0;
}