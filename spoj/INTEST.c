#include<stdio.h>
int main()
{
    int n,k;
    scanf("%i%i",&n,&k);
    int ans=0;
    int x;
    while(n--)
    {
        scanf("%i",&x);
        if(x%k==0)
            ans++;
    }
    printf("%i",ans);
    return 0;
}