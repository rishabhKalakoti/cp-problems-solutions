#include<stdio.h>
#include<math.h>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
 
#define ll long long int
ll check(ll K, vector<ll>p, ll N)
{
    if(K==0)
        return 1000000000;
    ll H=0;
    for(ll i=0;i<N;i++)
    {
        H+=ceil(p[i]/(K*1.0));
    }
    /*
    ll height=0;
    while(height < p[N-1])
    {
        H+=N-(upper_bound(p.begin(),p.end(),height+K)-p.begin());
        height+=K;
    }*/
    return H;
}
int main() {
	ll T;
	scanf("%lli",&T);
	while(T--)
	{
	    ll N,H;
	    scanf("%lli %lli",&N,&H);
	    vector<ll>A(N);
	    for(ll i=0;i<N;i++)
	        scanf("%lli", &A[i]);
	    sort(A.begin(),A.end());
	    ll K;
	    ll minK,maxK;
	    minK = 1;
	    maxK = A[N-1];
	    K=minK+(maxK-minK)/2;
	    while(!(check(K,A,N)<=H && (check(K-1,A,N)>H)))
	    {
	        if(check(K,A,N)<H && (check(K-1,A,N)<=H))
	        {
	            maxK=K-1;
	            K=minK+(maxK-minK)/2;
	        }
	        else if(check(K,A,N)>H)
	        {
	            minK=K+1;
	            K=minK+(maxK-minK)/2;
	        }
	        else
	        {
	            maxK=K-1;
	            K=minK+(maxK-minK)/2;
	        }
	    }
	    printf("%lli\n", K);
	}
	return 0;
} 