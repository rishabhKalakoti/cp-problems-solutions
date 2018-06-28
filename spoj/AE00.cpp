#include<bits/stdc++.h>
using namespace std;
#define ll long long
int d(int n)
{
    int c=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
            c++;
    }
    return c;
}
int main()
{
    int N;
    scanf("%i",&N);
    int s=0;
    for(int i=1;i<=N;i++)
    {
        s+=d(i);
    }
    printf("%i",s);
    return 0;   
}