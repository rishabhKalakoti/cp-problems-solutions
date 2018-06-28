#include <iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;
#define ll long long
#define MOD 1000000007
ll max(ll a,ll b){if(a>b) return a; return b;}
ll min(ll a,ll b){if(a<b) return a; return b;}
int main() 
{
    ll T;
    scanf("%lli",&T);
    while(T--)
    {
        char s[1005];
        scanf("%s",s);
        ll l=strlen(s);
        ll N;
        scanf("%lli",&N);
        ll A[l];
        // b_-1 a_1
        for(ll i=0;i<l;i++)
            if(s[i]=='a')
                if(i==0) A[i]=1;
                else A[i]=A[i-1]+1;
            else
                if(i==0) A[i]=-1;
                else A[i]=A[i-1]-1;
        ll e=A[l-1];
        ll c=0;
        for(ll i=0;i<l;i++)
        {
            if((A[i]>0) && (e>=0))
                c+=N;
            else if((A[i]>0) && (e<0))
                c+=min(ceil(A[i]/(abs(e)*1.0)),N);
            else if((A[i]<=0) && (e>0))
                if((N-(floor(abs(A[i])/(e*1.0))+1))>0)
                    c+=(N-(floor(abs(A[i])/(e*1.0))+1));
            //printf("(%lli,%lli) ",A[i], c);
        }
        printf("%lli\n",c);
    }
	return 0;
}