#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    scanf("%i",&t);
    while(t--)
    {
        int n;
        scanf("%i",&n);
        int A[n],B[n];
        for(int i=0;i<n;i++)
            scanf("%i",&A[i]);
        for(int i=0;i<n;i++)
            scanf("%i",&B[i]);
        sort(A,A+n);
        sort(B,B+n);
        ll ans=0;
        for(int i=0;i<n;i++)
            ans+=A[i]*B[i];
        printf("%lli\n",ans);
    }
    return 0;   
}