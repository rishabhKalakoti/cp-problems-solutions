#include <stdio.h>
#define ll long long int
using namespace std;
 
int main()
{
    ll N,Q;
    scanf("%lli %lli", &N, &Q);
    ll num;
    ll A[N][31];
    ll S[N][31];
    for(ll i=0;i<N;i++)
    {
        scanf("%lli",&num);
        for(ll j=0;j<31;j++)
        {
            if((num & (1<<j))==0)
                A[i][j]=0;
            else
                A[i][j]=1;
            if(i==0)
                S[i][j] = A[i][j];
            else
                S[i][j] = S[i-1][j] + A[i][j];
        }
    }
    for(ll i=0;i<Q;i++)
    {
        ll L,R;
        scanf("%lli %lli", &L,&R);
        ll X=0;
        for(ll j=30; j>=0;j--)
        {
            X=X<<1;
            ll sum=0;
            if(L==1)
                sum=S[R-1][j];
            else
                sum=S[R-1][j]-S[L-2][j];
            if(sum>=((R-L+1)/2.0))
                X+=0;
            else
                X+=1;
        }
        printf("%lli\n",X);
    }
    return 0;
} 