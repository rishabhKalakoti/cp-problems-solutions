#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define inf 999999
int main()
{
    ll C,F;
    scanf("%lli %lli",&C,&F);
    ll d[C][C];
    for(ll i=0;i<C;i++)
        for(ll j=0;j<C;j++)
            if(i==j) d[i][j]=0;
            else d[i][j]=inf;
    ll m=0;
    for(ll i=0;i<F;i++)
    {
        ll u,v,w;
        scanf("%lli %lli %lli",&u,&v,&w);
        d[u-1][v-1]=w;
        d[v-1][u-1]=w;
    }
    for (ll k = 0; k < C; k++)
    {
        for (ll i = 0; i < C; i++)
        {
            for (ll j = 0; j < C; j++)
            {
                if (d[i][k] + d[k][j] < d[i][j])
                {
                    d[i][j] = d[i][k] + d[k][j];
                }
            }
        }
    }
    for(ll i=0;i<C;i++)
    {
        for(ll j=0;j<C;j++)
        {
            m=max(m,d[i][j]);
            //printf("%lli ",d[i][j]);
        }
        //printf("\n");
    }
    printf("%lli",m);
    return 0;
}