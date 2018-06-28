#include<stdio.h>

int main()
{
    int N;
    scanf("%i",&N);
    while(N!=-1)
    {
        int A[N];
        int s=0;
        for(int i=0;i<N;i++)
        {
            scanf("%i",&A[i]);
            s+=A[i];
        }
        int ans=0;
        if(s%N==0)
        {
            int x=s/N;
            for(int i=0;i<N;i++)
            {
                if(A[i]<x)
                    ans+=x-A[i];
            }
        }
        else
        {
            ans=-1;
        }
        printf("%i\n",ans);
        scanf("%i",&N);
    }
    return 0;   
}