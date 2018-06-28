#include<bits/stdc++.h>
using namespace std;

int p(int a,int n)
{
    if(n==0)
        return 1;
    int x;
    x=p(a,n/2);
    x=(x*x)%10;
    if(n&1==1)
        x=(x*a)%10;
    return x%10;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        a=a%10;
        cin>>a>>b;
        cout<<p(a,b)<<endl;
    }
    return 0;
}