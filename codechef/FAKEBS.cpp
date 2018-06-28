#include <iostream>
#include<stdio.h>
#include<map>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
ll maxN(ll a, ll b){if(a>b)return a;return b;}
ll minN(ll a, ll b){if(a<b)return a;return b;}

int main() {
	ll T;
	scanf("%lli",&T);
	while(T--)
	{
	    ll N,Q;
	    scanf("%lli %lli",&N,&Q);
	    vector<ll> A(N);
	    map<ll,ll>m;
	    m.clear();
	    for(ll i=0;i<N;i++)
	    {
	        scanf("%lli",&A[i]);
	        m[A[i]]=i+1;
	    }
	    ll X;
	    vector<ll>A1;
	    A1 = A;
	    sort(A1.begin(),A1.end());
	    for(ll i=0;i<Q;i++)
	    {
	        scanf("%lli",&X);
	        ll index=(ll)(lower_bound(A1.begin(),A1.end(),X)-A1.begin());
	        ll lowT = index;
	        ll highT = N - lowT - 1;
	        ll low_need = 0;
	        ll high_need = 0;
	        ll swapN=0;
	        // binary search...
	        ll l,h,mid;
	        l=1;
	        h=N;
	        ll rt=m[X];
	        while(l<=h)
	        {
	            mid=(l+h)/2;
	            if(mid==rt || A[mid-1]==X)
	            {
	                break;
	            }
	            else if(mid < rt)
	            {
	                l=mid+1;
	                if(A[mid-1] > X)
	                    low_need=low_need+1;
	                else
	                    lowT--;
	            }
	            else if(mid > rt)
	            {
	                h=mid-1;
	                if(A[mid-1] < X)
	                    high_need=high_need+1;
	                else
	                    highT--;
	            }
	        }
	        if((lowT < low_need) || (highT < high_need))
	            swapN=-1;
	        else
	            swapN = maxN(high_need,low_need);
	        printf("%lli\n",swapN);
	    }
	}
}