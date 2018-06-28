T=int(input())
for i in range(T):
    N, r=input().split()
    N=int(N)
    r=int(r)
    flag=0
    a=-1
    b=-1
    s=input().split(" ")
    for j in range(N):
        s[j]=int(s[j])
    for j in range(N):
        if(a!=-1):
            if(s[j]<a):
                flag=1
                break
        if(b!=-1):
            if(s[j]>b):
                flag=1
                break
        if(j!=0):
            if s[j]>s[j-1]:
                a=s[j-1]
            if s[j]<s[j-1]:
                b=s[j-1]
    if(s[N-1]!=r):
        flag=1
    if(flag==1):
        print("NO")
    else:
        print("YES") 