#include <iostream>
#include<stdio.h>
#include<vector>
#include<map>
#include<iterator>
using namespace std;

int main() {
	int N;
	scanf("%i",&N);
	vector<vector<int>>nod(1005);
	map<int,int>m;
	map<int,int>::iterator it;
	//map<int>p;
	for(int i=2; i<=N;i++)
	{
	    int x;
	    scanf("%i",&x);
	    m[x]=1;
	    //p[x]=1;
	    nod[x].push_back(i);
	}
	//printf("s:%i\n",m.size());
	int flag=0;
	for(it=m.begin();it!=m.end();it++)
	{
	    int x;
	    x=it->first;
	    int count=0;
	    //printf("x:%i\n",x);
	    //printf("%u\n", nod[x].size());
	    for(int i=0;i<nod[x].size();i++)
	    {
	        if(m.count(nod[x][i])==0)
	            count++;
	    }
	    //printf("count:%i\n",count);
	    if(count<3)
	    {
	        flag=1;
	        break;
	    }
	}
	if(flag==0)
	{
	    printf("YES");
	}
	else
	{
	    printf("NO");
	}
	return 0;
}