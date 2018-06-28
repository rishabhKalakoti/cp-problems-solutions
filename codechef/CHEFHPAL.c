#include <stdio.h>

int main() {
	long long unsigned int T;
	long long unsigned int i,j;
	scanf("%llu", &T);
	char str1[27]="abcdefghijklmnopqrstuvwxyz";
	char str2[7]="aabbab";
	for(i=0; i<T;i++)
	{
	    long long unsigned int N;
	    int a;
	    scanf("%llu %d", &N, &a);
	    if(a==2)
	    {
	        if(N<=8)
	        {
	            switch(N)
	            {
	                case 1: printf("1 a"); break;
	                case 2: printf("1 ab"); break;
	                case 3: printf("2 aab"); break;
	                case 4: printf("2 aabb"); break;
	                case 5: printf("3 aaabb"); break;
	                case 6: printf("3 aaabbb"); break;
	                case 7: printf("3 aaababb"); break;
	                case 8: printf("3 aaababbb"); break;
	            }
	        }
	        else
	        {
	            printf("4 ");
	            j=0;
	            while(j<N)
	            {
	                printf("%c", str2[j%6]);
	                j++;
	            }
	        }
	    }
	    else if(a==1)
	    {
	        printf("%llu ", N);
	        j=0;
	        while(j<N)
	        {
	            printf("a");
	            j++;
	        }
	    }
	    else
	    {
	        j=0;
	        printf("1 ");
	        while(j<N)
	        {
	            printf("%c", str1[j%a]);
	            j++;
	        }
	    }
	    printf("\n");
	}
	return 0;
}