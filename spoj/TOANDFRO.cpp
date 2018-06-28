#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    scanf("%i",&t);
    while(t>0)
    {
        string s;
        cin>>s;
        int l=s.length();
        char arr[200][t];
        int j=0;
        while(t*(j)<l)
        {
            if(j%2==0)
            for(int i=0;i<t;i++)
                arr[j][i]=s[t*j+i];
            else
            for(int i=0;i<t;i++)
                arr[j][i]=s[t*(j+1)-i-1];
            j++;
        }
        for(int i=0;i<t;i++)
            for(int k=0;k<j;k++)
                printf("%c",arr[k][i]);
        printf("\n");
        scanf("%i",&t);
    }
    return 0;   
}