#include<stdio.h>
#define ll long long

int main()
{
    int a,b,c;
    while(1)
    {
        scanf("%i %i %i",&a,&b,&c);
        if(a==0 && b==0 && c==0)
            break;
        if(2*b==a+c)
        {
            printf("AP %i\n",c+c-b);
        }
        else if(b*b==a*c)
        {
            printf("GP %i\n",c*(c/b));
        }
    }
    return 0;   
}