#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
 
long long int min(long long int a,long long int b)
{
    if(a<b)
        return a;
    else
        return b;
}
 
int main() {
    long long unsigned int T;
    scanf("%llu",&T);
    while(T--)
    {
        long long int N,M,X,K;
        scanf("%lld %lld %lld %lld", &N,&M,&X,&K);
        char s[K+1];
        scanf("%s",&s);
        long long int even=0,odd=0;
        for(long long int i=0;i<K;i++)
        {
            if(s[i]=='E')
                even++;
            else if(s[i]=='O')
                odd++;
        }
        int flag=1;
        while(M > 0 && N > 0)
        {
            if(flag==0)
            {
                N=N-min(even,X);
                even=even-min(even,X);
                flag=1;
            }
            else
            {
                N=N-min(odd,X);
                odd=odd-min(odd,X);
                flag=0;
            }
            M--;
        }
        if(M==0 && N>0)
            printf("no\n");
        else
            printf("yes\n");
    }
	return 0;
} 