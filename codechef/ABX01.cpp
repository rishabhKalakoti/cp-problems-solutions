#include<stdio.h>
#include<math.h>
#include<string>
typedef long long unsigned int llu;
llu exponentiation(llu base, llu e)
{
    if (e == 0)
        return 1;
 
    if (e == 1)
        return base;
 
    llu t = exponentiation(base, e / 2);
    t = (t * t);
 
    // if exponent is even value
    if (e % 2 == 0)
        return t;
 
    // if exponent is odd value
    else
        return ((base) * t);
}
int main() {
    long long unsigned int t;
	scanf("%llu", &t);
	while(t--)
	{
	    long long unsigned int A,N;
	    scanf("%llu %llu", &A,&N);
	    //long long unsigned int num =exponentiation(A,N);
	    //string s;
	    //s=to_string(num);
	    
	    long long unsigned int num;
	    num=A;
	    while(num>=10)
	    {
	        long long unsigned int sum=0;
	        while(num>0)
	        {
	            sum=sum+num%10;
	            num/=10;
	        }
	        num=sum;
	    }
	    A=num;
	    if(A==1)
	        N=1;
	    if(A==2)
	        N=N%6;
	    if(A==3)
	        if(N>2)
	            N=2;
	    if(A==4)
	        N=N%3;
	    if(A==5)
	        N=N%6;
	    if(A==6)
	        if(N>2)
	            N=2;
	    if(A==7)
	        N=N%3;
	    if(A==8)
	        N=N%2;
	    if(A==9)
	        N=1;
	    num =exponentiation(A,N);
	    while(num>=10)
	    {
	        long long unsigned int sum=0;
	        while(num>0)
	        {
	            sum=sum+num%10;
	            num/=10;
	        }
	        num=sum;
	    }
	    A=num;
	    printf("%llu\n", num);
	}
	return 0;
} 