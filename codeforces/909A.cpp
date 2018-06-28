#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

int main() {
	string a,b;
	cin>>a>>b;
	//long long unsigned int x=strlen(a);
	printf("%c", a[0]);
	for(int i=1; i<10; i++)
	{
	    if(a[i]>='a' && a[i]<='z')
	    if(a[i]<b[0])
	        printf("%c", a[i]);
	    else
	        break;
	   else
	    break;
	}
	printf("%c", b[0]);
	return 0;
}