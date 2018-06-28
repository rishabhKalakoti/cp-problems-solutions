#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
    int T;
    scanf("%i",&T);
    while(T--)
    {
        int N,K;
        scanf("%i %i",&N,&K);
        vector<int> A(N);
        int c=0;
        set<int>s;
        for(int i=1;i<=N;i++) s.insert(i);
        for(int i=0;i<N;i++)
        {
            scanf("%i",&A[i]);
            if(A[i]!=0) s.erase(A[i]);
        }
        vector<int>X;
        set<int>::iterator it;
        for(it=s.begin();it!=s.end();it++)
        {
            X.push_back(*it);
        }
        sort(X.begin(),X.end());
        int count=0;
        vector<int>Y=A;
        do{
            int j=0;
            for(int i=0;i<N;i++)
            {
                if(Y[i]==0)
                {
                    Y[i]=X[j];
                    j++;
                }
            }    
            int c;
            //for(int i=0;i<N;i++)    printf("%i ",Y[i]);
            //printf("\n");
            c=0;
            for(int i=1;i<N;i++)
            {
                if(Y[i]>Y[i-1])
                {
                    c++;
                }
            }
            Y=A;
            if(c==K)
                count++;
            //printf("x");
        }while(next_permutation(X.begin(),X.end()));
        printf("%i\n",count);
    }
	return 0;
}