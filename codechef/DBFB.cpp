#include <iostream>
#include<stdio.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
ll maxN(ll a, ll b){if(a>b)return a;return b;}
int main() {
	ll T;
	scanf("%lli",&T);
	ll fib[100000];
	fib[0]=1;
	fib[1]=1;
	for(ll i=2;i<100000;i++)
	{
	    fib[i]=(fib[i-1]+fib[i-2])%MOD;
	}
	while(T--)
	{
	    ll M,N;
	    scanf("%lli %lli",&M,&N);
	    ll A[M],B[M];
	    ll x;
	    for(ll i=0;i<M;i++)
	    {
	        scanf("%lli",&x);
	        if(i==0)
	            A[i]=x;
	        else
	            A[i]=(A[i-1]+x)%MOD;
	    }
	    for(ll i=0;i<M;i++)
	    {
	        scanf("%lli",&x);
	        if(i==0)
	            B[i]=x;
	        else
	            B[i]=(B[i-1]+x)%MOD;
	    }
	    ll result=0;
	    /*
	    for(ll i=0;i<M;i++)
	        for(ll j=0;j<M;j++)
	        {
	            if(N==1)
	                result+=A[i];
	            else if(N==2)
	                result+=B[j];
	            else
	            {
	                result=result+(A[i]*fib[N-3])%MOD;
	                result=result%MOD;
	                result=result+(B[j]*fib[N-2])%MOD;
	            }
	            result=result%MOD;
	        }
	    */
	    if(N==1)
	        result=A[M-1]*M;
	    else if(N==2)
	        result=B[M-1]*M;
	    else
	    {
	        result=(A[M-1]*fib[N-3])%MOD;
	        result+=(B[M-1]*fib[N-2])%MOD;
	        result%=MOD;
	        result=result*M;
	    }
	    result%=MOD;
	    printf("%lli\n",result);
	}
}