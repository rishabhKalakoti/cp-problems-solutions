#include<stdio.h>
 
int main() {
	long unsigned int T;
	scanf("%lu", &T);
	while(T--)
	{
	    long long unsigned int x, N;
	    scanf("%llu %llu", &x, &N);
	    if(N<=3 || ((N*N+N)/2-x)%2!=0)
	    {
	        printf("impossible\n");
	    }
	    else
	    {
	        long long unsigned int half=((N*N+N)/2-x)/2;
	        long long unsigned int a,a1,a2,p,q;
	        long long unsigned int sum,sum1,sum2;
	     
	        sum=0;
	        //printf("half=%llu\n", half);
	        for(long long unsigned int i=1; i<=N;i++)
	        {
	            a=i;
	            if(i!=x)
	                sum+=i;
    	        if(sum>=half)
    	            break;
	        }
	        //printf("sum=%llu\n", sum);
	        //***
	        long long unsigned int req;
	        long long unsigned int r1, r2;
	        req=sum-half;
	        r1=0;
	        r2=0;
	        // sum == half
	        if(req==0)
	        {
	            for(long long unsigned int i=1; i<=N;i++)
	            {
	                if(i==x)
	                    printf("2");
	                else if(i>a)
	                    printf("1");
	                else
	                    printf("0");
	            }
	            printf("\n");
	        }
	        else
	        {
    	        if(req!=x)
    	        {
    	            r1=req;
    	        }
    	        else    // req==x
    	        {
        	        if (x>=3)
        	        {
        	            r1=1;
        	            r2=x-1;
        	        }
        	        else if(x==1)
        	        {
        	            r1=2;
        	            r2=a;
        	            a=a+1;
        	        }
        	        else if(x==2)
        	        {
        	            r1=a;
        	            r2=3;
        	            a=a+1;
        	        }
    	        }
    	        for(long long unsigned int i=1; i<=N; i++)
    	        {
    	            if(i==x)
    	            {
    	                printf("2");
    	            }
    	            else if(i==r1 || i==r2 || i>a)
    	            {
    	                printf("1");
    	            }
    	            else
    	            {
    	                printf("0");   
    	            }
    	        }
    	        printf("\n");
	        }
	    }
	}
	return 0;
}  