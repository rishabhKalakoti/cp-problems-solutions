#include<iostream>
#include<stdio.h>
#include<string.h>
#include<map>
#include<vector>
#include<iterator>
using namespace std;
 
#define ll long long int
#define llu long long unsigned int
 
int main() {
    ll T;
    scanf("%lli",&T);
    map<char, vector<ll>>m;
    map<char, vector<ll>>::iterator it;
    vector<ll>::iterator it1;
    while(T--)
    {
        m.clear();
        char s[100005];
        ll t[100005];
        scanf("%s",&s);
        ll len=strlen(s);
        for(ll i=0; i<len;i++)
        {
            m[s[i]].push_back(i+1);
        }
        int c=0;
        for(it=m.begin(); it!=m.end();it++)
        {
            if(c==2)
                break;
            if((it->second).size() % 2 == 1)
                c++;
        }
        if(((len%2==0) && (c>0)) || ((len%2==1) && (c!=1)))
        {
            printf("-1\n");
        }
        else
        {
            vector<ll>x;
            ll f=0;
            for(it=m.begin(); it!=m.end();it++)
            {
                if((it->second).size()%2==0)
                {
                    it1=it->second.begin();
                    for(ll j=0;j<(it->second).size();j++)
                    {
                        t[f]=it1[j];
                        t[len-1-f]=it1[j+1];
                        f++;
                        j++;
                    }
                }
                else
                {
                    it1=it->second.begin();
                    for(ll j=0;j<(it->second).size();j++)
                    {
                        x.push_back(it1[j]);
                    }
                }
            }
            it1=x.begin();
            int flag=1;
            for(ll j=0;j<x.size();j++)
            {
                if(flag==1)
                {
                    t[f]=it1[j];
                    flag=0;
                }
                else
                {
                    t[len-1-f]=it1[j];
                    f++;
                    flag=1;
                }
            }
            for(ll j=0;j<len;j++)
            {
                printf("%lli ",t[j]);
            }
            printf("\n");
        }
    }
	return 0;
}  