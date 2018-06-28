#include <stdio.h>
#include<string.h>
int main() {
	char c;
	int count=0;
	char s[50];
	scanf("%s", s);
	for(int i=0; i<strlen(s); i++)
	{
	    c=s[i];
	    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
	    {
	        count++;
	    }
	    if(c=='1' || c=='3' || c=='5' || c=='7' || c=='9')
	    {
	        count++;
	    }
	}
	printf("%i", count);
	return 0;
}