#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
#define ll long long
#define MOD 1000000007
ll pow10(ll y)
{
    if (y == 0)
        return 1;
    else if (y%2 == 0)
        return (pow10(y/2)*pow10(y/2))%MOD;
    else
        return (((10*pow10(y/2))%MOD)*pow10(y/2))%MOD;
}
int main() {
    ll T;
    scanf("%lli",&T);
    while(T--)
    {
        ll N,W;
        scanf("%lli %lli",&N,&W);
        if(abs(W)>=10)
            printf("0\n");
        else if(W>=0)
            printf("%lli\n", (pow10(N-2)*(9-W))%MOD);
        else
            printf("%lli\n", (pow10(N-2)*(10+W))%MOD);
    }
	return 0;
}