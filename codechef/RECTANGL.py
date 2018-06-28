t=int(input())
for i in range(t):
    s=input().split()
    j=0
    l=dict()
    while j<4:
        s[j]=int(s[j])
        if s[j] in l.keys():
            l[s[j]]=l[s[j]]+1
        else:
            l[s[j]]=1
        j=j+1
    flag=0
    #print(l)
    if(len(l)==2):
        for x in l.keys():
            if l[x]!=2:
                flag=1
    elif(len(l)==1):
        for x in l.keys():
            if l[x]!=4:
                flag=1
    else:
        flag=1
    if flag==0:
        print("YES")
    else:
        print("NO") 