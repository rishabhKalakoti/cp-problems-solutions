#include<iterator>
#include <iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long int ll;
typedef long long unsigned int llu;
int main() {
	int T;
	scanf("%i", &T);
	while(T--)
	{
	    int N;
	    scanf("%i", &N);
	    vector<vector<llu>>num(N);
	    vector<llu>::iterator it;
	    // input
	    for(int i=0; i<N; i++)
	    {
	        for(int j=0; j<N;j++)
	        {
	            llu x;
	            scanf("%llu", &x);
	            num[i].push_back(x);
	        }
	    }
	    
	    for(int i=0; i<N; i++)
	    {
	        sort(num[i].begin(), num[i].end());
	    }
	    llu sum=0;
	    llu y;
	    y=num[N-1][N-1];
	    sum+=y;
	    int flag=0;
	    int i=N-2;
	    
	    while(i>=0)
	    {
	        //printf("%llu\n", sum);
	        it=lower_bound(num[i].begin(), num[i].end(), y);
	        //printf("%i\n", distance(num[i].begin(),it));
	        
	        if(it!=num[i].begin())
	        {
	            y=num[i][it-num[i].begin()-1];
	            sum+=y;
	        }
	        else
	        {
	            flag=1;
	        }
	        i--;
	    }
	    if(flag==1)
	        printf("-1\n");
	    else
	        printf("%llu\n", sum);
	}
	return 0;
} 