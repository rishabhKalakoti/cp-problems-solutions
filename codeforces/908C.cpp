#include <iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

int main() {
	long int n;
	float r;
	scanf("%li %f", &n, &r);
	vector<long int> x(n);
	vector<pair<float, long int>>ans;
	for(long int i=0; i<n;i++)
	{
	    scanf("%li", &x[i]);
	}
	printf("%f ", r);
	ans.push_back(make_pair(r,x[0]));
	//sort(ans.begin(), ans.end());
	for(long int i=1; i<n; i++)
	{
	    float y=r;
	    float y1;
	    for(long int j=0; j<ans.size();j++)
	    {
	        if(abs(x[i]-ans[j].second)<=2*r)
	        {
	            
	            y1=ans[j].first+sqrt(pow(2*r,2)-pow(abs(x[i]-ans[j].second),2));
	            if(y1>y)
	                y=y1;
	        }
	        
	    }
	    ans.push_back(make_pair(y,x[i]));
	    printf("%.11f ", y);
	}
	return 0;
}