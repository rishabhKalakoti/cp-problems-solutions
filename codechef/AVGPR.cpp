#include <iostream>
#include<stdio.h>
#include<vector>
#include <bits/stdc++.h>
#include<map>
#include<iterator>
#include<set>
using namespace std;
#define ll long long
int main() {
    int T;
    scanf("%i",&T);
    while(T--)
    {
        ll N;
        scanf("%lli",&N);
        map<ll,ll>m;
        map<ll,ll>::iterator it1,it2;
        
        unordered_set<ll>s;
        //vector<ll> v(N);
        ll c=0;
        for(ll i=0; i<N;i++)
        {
           ll x;
           scanf("%lli",&x);
            if(m.count(x)>0)
                m[x]++;
            else
                m[x]=1;
            s.insert(x);
           //v[i]=x; 
           //p[x]=1;
        }
        for(it1=m.begin();it1!=m.end();it1++)
        {
            // self element
            c+=((it1->second)*((it1->second)-1)/2);
            // others
            it2=it1;
            it2++;
            for(;it2!=m.end();it2++)
            {
                if((it1->first + it2->first)%2==0)
                    if(s.find((it1->first + it2->first)/2)!=s.end())
                        c+=((it1->second)*(it2->second));
            }
        }
        /*
        for(ll i=0;i<N;i++)
        {
            for(ll j=i+1;j<N;j++)
            {
                if(((v[i]+v[j])%2)==0)
                    if(s.find((v[i] + v[j])/2) != s.end())
                        c++;
            }
        }*/
        printf("%lli\n",c);
    }
	return 0;
} 