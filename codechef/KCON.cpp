#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
#include<climits>
typedef long long int ll;
using namespace std;
 
ll maxSubArraySum(vector<ll>a, ll size)
{
    ll max_so_far = INT_MIN, max_ending_here = 0;
 
    for (ll i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
int main() 
{
    int t;
    scanf("%i", &t);
    while(t--)
    {
        ll N,k;
        scanf("%lli %lli", &N, &k);
        ll sum,sub,sub1,ans;
        sum=0;
        vector<ll>arr(2*N);
        for(ll i=0; i<N; i++)
        {
            ll x;
            scanf("%lli", &x);
            arr[i]=x;
            arr[i+N]=x;
            sum+=x;
        }
        sub=maxSubArraySum(arr,N);
        sub1=maxSubArraySum(arr,2*N);
        if(sum>0)
        {
            if(k==1)
                ans=sub;
            else if(k==2)
                ans=sub1;
            else if(k>2)
                ans=sub1+sum*(k-2);
        }
        else
        {
            if(k==1)
                ans=sub;
            else
                ans=sub1;
        }
        printf("%lli\n", ans);
    }
	return 0;
} 