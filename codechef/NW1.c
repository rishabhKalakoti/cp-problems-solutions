#include<stdio.h>
 
int main() {
    long int t;
	scanf("%ld", &t);
	while(t--)
	{
	    int W;
	    char s[8];
	    scanf("%d %s", &W, s);
	    int i;
	    if(!strcmp(s,"mon")) i=0;
	    else if(!strcmp(s,"tues")) i=1;
	    else if(!strcmp(s,"wed")) i=2;
	    else if(!strcmp(s,"thurs")) i=3;
	    else if(!strcmp(s,"fri")) i=4;
	    else if(!strcmp(s,"sat")) i=5;
	    else if(!strcmp(s,"sun")) i=6;
	    int arr[7]={4,4,4,4,4,4,4};
	    //printf("%i\n", i);
	    for(int j=29; j<=W;j++)
	    {
	        arr[i]++;
	        i=i+1;
	        if(i==7)
	            i=0;
	    }
	    for(int j=0; j<7;j++)
	    {
	        printf("%i ", arr[j]);
	    }
	    printf("\n");
	}
	return 0;
} 