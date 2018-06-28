#include <iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
 
int main() {
    long long int T;
    scanf("%lld",&T);
    while(T--)
    {
        char s[500001];
        scanf("%s",&s);
        long long l=strlen(s);
        long long count;
        count=0;
        for(long long i=0;i<l-3;i++)
        {
            int c=0;
            char x='c';
            if(s[i]==x || s[i+1]==x || s[i+2]==x || s[i+3]==x)
                c=(c|1);
            x='h';
            if(s[i]==x || s[i+1]==x || s[i+2]==x || s[i+3]==x)
                c=(c|2);
            x='e';
            if(s[i]==x || s[i+1]==x || s[i+2]==x || s[i+3]==x)
                c=(c|4);
            x='f';
            if(s[i]==x || s[i+1]==x || s[i+2]==x || s[i+3]==x)
                c=(c|8);
            
            if(c==15)
                count++;
            c=0;
        }
        if(count==0)
        {
            printf("normal\n");
        }
        else
        {
            printf("lovely %lld\n",count);
        }
    }
	return 0;
}
 