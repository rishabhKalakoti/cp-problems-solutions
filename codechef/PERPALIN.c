#include<stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    int i;
    long long unsigned int N, P;
    for(i=0; i<T; i++)
    {
        scanf("%llu %llu", &N, &P);
        if(P==1 || P==2)
            printf("impossible\n");
        else
        {
            long long unsigned int j,k;
            for(j=0; j<(N/P); j++)
            {
                printf("a");
                for(k=0; k<P-2; k++)
                {
                    printf("b");   
                }
                printf("a");
            }
            printf("\n");
        }
    }
    return 0;    
}