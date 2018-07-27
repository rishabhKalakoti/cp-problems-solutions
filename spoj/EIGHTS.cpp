#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll t;
    // 192 442 692 942
    scanf("%lli",&t);
    while(t--)
    {
        ll x;
        scanf("%lli",&x);
        ll x1=x;
        x--;
        x/=4;
        if(x>0) printf("%lli",x);
        if(x1%4==1) printf("192");
        else if(x1%4==2)printf("442");
        else if(x1%4==3)printf("692");
        else printf("942");
        printf("\n");
    }
	return 0;
}