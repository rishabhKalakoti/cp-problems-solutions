#include<stdio.h>
#include<iostream>


using namespace std;

long long unsigned int count(long long unsigned int A[], int n, long long unsigned int m)
{
    
    long long unsigned int c1, c2;
    if(n==0)
        return 0;
    //printf("%llu ", A[n-1]);
    // include
    if(A[n-1]+count(A, n-1, m-A[n-1])<=m)
        c1= A[n-1]+count(A, n-1, m - A[n-1]);
    else
        c1=0;
    c2= count(A, n-1, m);
    
    if(c1 >c2)
        return c1;
    else
        return c2;
}

int main()
{
    int t;
    scanf("%i", &t);
    while(t--)
    {
        int n;
        long long unsigned int m;
        scanf("%i %llu", &n, &m);
        long long unsigned int A[n];
        for(int i=0; i<n; i++)
        {
            scanf("%llu", &A[i]);
        }
        printf("%llu\n", count(A,n,m));
    }
    return 0;
}