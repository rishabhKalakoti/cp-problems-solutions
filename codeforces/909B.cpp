#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	long long unsigned int count=0;
	long long  int n;
	scanf("%lli", &n);
	while(n>0)
	{
	    count=count+n;
	    n=n-2;
	}
	printf("%llu", count);
	return 0;
}