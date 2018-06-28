#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define MOD 1000000007
#define sc(a) scanf("%lli",&a)
#define forep(i,N) for(ll i=0;i<N;i++)
#define mp(a,b) make_pair(a,b)
#define ff first
#define ss second
typedef struct
{
    ll a;
    ll b;
    ll d;
}st;
bool cmp(st a, st b)
{
    return a.d < b.d;
}
int main() {
    ll T;
    sc(T);
    while(T--)
    {
        ll N;
        sc(N);
        vector<st>jobs(N);
        forep(i,N)
        {
            sc(jobs[i].a);sc(jobs[i].b);sc(jobs[i].d);
        }
        sort(jobs.begin(),jobs.end(),cmp);
        priority_queue<pair<ll,ll>>pq;
        ll t=0;
        double money=0.0;
        forep(i,N)
        {
            t+=jobs[i].b;
            pq.push(mp(jobs[i].a,jobs[i].b));
            if(t<=jobs[i].d) continue;
            while(1)
            {
                pair<ll,ll>tmp=pq.top();
                pq.pop();
                if(t-tmp.ss<=jobs[i].d)
                {
                    tmp.ss -= t-jobs[i].d;
                    money += double(t-jobs[i].d)/double(tmp.ff);
                    t= jobs[i].d;
                    pq.push(tmp);
                    break;
                }
                else
                {
                    money+=double(tmp.ss)/double(tmp.ff);
                    t-=tmp.ss;
                }
            }
        }
        printf("%.2f\n",money);
    }
    return 0;
}