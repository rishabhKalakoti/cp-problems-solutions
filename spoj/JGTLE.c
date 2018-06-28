#include<stdio.h>
#define ll long long int
int main()
{
    int T,T1;
    scanf("%d",&T);
    T1=T;
    while(T--)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        ll a1,b1,c1;
        a1=a;
        b1=b;
        c1=c;
        printf("Case %d: %lld\n", (T1-T), ((a1*(b1*(b1+1)/2)*(c1*(c1+1)/2))));
    }
    return 0;
}