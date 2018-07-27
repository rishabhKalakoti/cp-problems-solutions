#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	string s;
	ll len;
	ll dp[5005];
	dp[0]=1;
	int f=0;
	int no;
	while(1){
	    cin>>s;
	    if(s=="0")
	        break;
	    len=s.length();
	    for(ll i=1;i<len;i++)
	    {
	        dp[i]=0;
	        if(s[i]!='0')
	        dp[i]=dp[i-1];
	        f=0;
	        no=(s[i-1]-'0')*10+(s[i]-'0');
	        if(no>=10 && no<=26)
	            f=1;
	       if(f)
	        if(i==1) dp[i]+=1;
	        else dp[i]+=dp[i-2];
	    }
	    if(len==1) printf("1\n");
	    else
	    printf("%lli\n", max(dp[len-1],dp[len-2]));
	}
	return 0;
}