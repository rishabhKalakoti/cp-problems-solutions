#include<stdio.h>
#define ll long long int

int main()
{
    int N;
    ll A[100];
    A[0]=1;
    for(int i=2;i<=100;i++)
    {
        A[i-1]=A[i-2]+i*i;
    }
    while(1)
    {
        scanf("%i",&N);
        if(N==0)
            break;
        printf("%lli\n",A[N-1]);
    }
    return 0;   
}