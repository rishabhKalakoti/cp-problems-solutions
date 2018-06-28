#include <iostream>
#include<stdio.h>
#include<vector>
using namespace std;
 
int main() {
    int T;
    scanf("%i", &T);
    while(T--)
    {
        long unsigned int N,M;
        scanf("%lu %lu", &N, &M);
        long unsigned int dp[N+1][M+1];
        char c[N+1][M+1];
        c[0][0]='0';
        dp[0][0]=0;
        char A[5001],B[5001];
        scanf("%s", A);
        scanf("%s", B);
        for(long unsigned int i=1; i<=N; i++)
        {
            c[i][0]=A[i-1];
            if(c[i-1][0]!=c[i][0])
                dp[i][0]=dp[i-1][0]+1;
            else
                dp[i][0]=dp[i-1][0];
        }
        for(long unsigned int i=1; i<=M; i++)
        {
            c[0][i]=B[i-1];
            if(c[0][i]!=c[0][i-1])
                dp[0][i]=dp[0][i-1]+1;
            else
                dp[0][i]=dp[0][i-1];
        }
        
        for(long unsigned int i=1; i<=N; i++)
        {
            for(long unsigned int j=1; j<=M; j++)
            {
                long unsigned int a,b;
                if(c[0][j]!=c[i][j-1])
                    a=dp[i][j-1]+1;
                else
                    a=dp[i][j-1];
                if(c[i][0]!=c[i-1][j])
                    b=dp[i-1][j]+1;
                else
                    b=dp[i-1][j];
                if(a<b)
                {
                    dp[i][j]=a;
                    c[i][j]=c[0][j];
                }
                else
                {
                    dp[i][j]=b;
                    c[i][j]=c[i][0];
                }
            }
        }
        printf("%lu\n", dp[N][M]);
    }
	return 0;
} 