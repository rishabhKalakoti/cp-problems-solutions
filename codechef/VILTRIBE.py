T=int(input())
for i in range(T):
    s=input()
    a=0
    b=0
    flag=0
    temp=0
    for i in range(len(s)):
        ch=s[i]
        if(ch=='A'):
            if(flag==1):
                a = a + temp
            a=a+1
            temp=0
            flag=1
        if(ch=='B'):
            if(flag==2):
                b = b + temp
            b=b+1
            temp=0
            flag=2
        if(ch=='.'):
            if(flag==1 or flag==2):
                temp=temp+1
    print(a, b)