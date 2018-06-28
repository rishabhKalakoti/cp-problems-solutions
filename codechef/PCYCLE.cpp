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
    forep(i,N) sc(A[i]);
    ll visited[N];
    forep(i,N) visited[i]=0;
    ll cycles=0;
    vector<vector<ll> >v;
    
    forep(i,N)
    {
        if(visited[i]==0)
        {
            vector<ll>x;
            cycles++;
            x.pb(i);
            visited[i]=1;
            ll j=i;
            while(visited[A[j]-1]==0)
            {
                j=A[j]-1;
                visited[j]=1;
                x.pb(j);
            }
            x.pb(A[j]-1);
            v.pb(x);
        }
    }
    
    printf("%lli\n",cycles);
    
    forep(i,v.size())
    {
        forep(j,v[i].size())
            printf("%lli ",v[i][j]+1);
        printf("\n");
    }
       
    return 0;
}