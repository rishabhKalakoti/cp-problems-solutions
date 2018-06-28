#include <stdio.h>
#include <string.h>
int priority(char c)
{
    switch(c)
    {
        case '+':
            return 1;
        case '-':
            return 2;
        case '*':
            return 3;
        case '/':
            return 4;
        case '^':
            return 5;
    }
}

int main() {
	char s[402];
	char st[402];
	long int ptr=-1;
	unsigned long int n; 
	scanf("%lu", &n);
	
	for(long int i=0; i<n; i++)
	{
	    scanf("%s", s);
	    //printf("%s", s);
	    
	    long int l=strlen(s);
	    for (long int j=0; j<l; j++)
	    {
	        if(s[j]=='(')
	            st[++ptr]=s[j];
	        else if(s[j]<='z' && s[j]>='a')
	            printf("%c", s[j]);
	        else if(s[j]=='+' || s[j]=='-' || s[j]=='^'
	            || s[j]=='*' || s[j]=='/')
	        {
	            if(ptr>-1 && st[ptr]=='(')
	                st[++ptr]=s[j];
	            else if(ptr==-1)
	                st[++ptr]=s[j];
	            else
	            {
	                if(priority(s[j]) < priority(st[ptr]))
	                {
	                    printf("%c", st[ptr]);
	                    st[ptr]=s[j];
	                }
	                else
	                {
	                    st[++ptr]=s[j];
	                }
	            }
	        }
	        else if(s[j]==')')
	        {
	            while(st[ptr]!='(')
	            {
	                printf("%c", st[ptr]);
	                ptr--;
	            }
	            ptr--;
	        }
	    }
	    printf("\n");
	}
	return 0;
}