#include<bits/stdc++.h>
using namespace std;
bitset<100001> bs;
int main()
{
    int n;
    scanf("%d",&n);
    int q;
   scanf("%d",&q);
    bs[0]=1;
   for(int i=0;i<n;++i)
   {
   	int x;
   	scanf("%d",&x);
   	bs|=bs<<x;
   }
   int s[100005]={0};
   for(int i=1;i<=100001;++i)
   	s[i]=s[i-1]+bs[i];
   
   while(q--)
   {
   	int a,b;
   	scanf("%d%d", &a, &b);
   	printf("%d\n", s[b]-s[a-1]);;
   }
   return 0;
}