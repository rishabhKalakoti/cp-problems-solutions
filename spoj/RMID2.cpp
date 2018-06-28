#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define MOD 1000000007
#define sc(a) scanf("%lli",&a)
#define forep(i,N) for(ll i=0;i<N;i++)
int main() {
    ll T;
    sc(T);
    while(T--)
    {
        priority_queue<ll>max_heap;
        priority_queue<ll,vector<ll>,greater<ll>>min_heap;
        ll N;
        sc(N);
        while(N!=0)
        {
            if(N==-1)
            {
                if(min_heap.size()==max_heap.size())
                {
                    printf("%lli\n",max_heap.top());
                    max_heap.pop();
                    max_heap.push(min_heap.top());
                    min_heap.pop();
                }
                else
                {
                    printf("%lli\n",max_heap.top());
                    max_heap.pop();
                }
            }
            else
            {
                if(max_heap.size()==min_heap.size())
                {
                    min_heap.push(N);
                    max_heap.push(min_heap.top());
                    min_heap.pop();
                }
                else
                {
                    max_heap.push(N);
                    min_heap.push(max_heap.top());
                    max_heap.pop();
                }
            }
            sc(N);
        }
        printf("\n");
    }
    return 0;
}