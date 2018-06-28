n,m=input().split()
n=int(n)
m=int(m)
iS=list()
iE=list()
maze=list()
for i in range(n):
    x=input()
    if 'S' in x:
        for j in range(len(x)):
            if 'S'==x[j]:
                iS.append(i)
                iS.append(j)
    if 'E' in x:
        for j in range(len(x)):
            if 'E'==x[j]:
                iE.append(i)
                iE.append(j)
    l=list()
    for i in range(len(x)):
        l.append(x[i])
    maze.append(l)
s=input()
count=0
case=["0123","0132","0213","0231","0312","0321",\
    "1230","1203","1302","1320","1032","1023",\
    "2301","2310","2013","2031","2103","2130",\
    "3012","3021","3102","3120","3201","3210"]
for i in range(len(case)):
    u=case[i][0]
    d=case[i][1]
    r=case[i][2]
    l=case[i][3]
    x=iS[0]
    y=iS[1]
    flag=1
    for j in range(len(s)):
        if s[j]==u:
            x=x-1
        elif s[j]==d:
            x=x+1
        elif s[j]==r:
            y=y+1
        elif s[j]==l:
            y=y-1
        #print(x,y)
        if((x<0) or (x>n-1) or (y<0) or (y>m-1)):
            break
        elif(maze[x][y]=='E'):
            flag=0
            break
        elif(maze[x][y]=='#'):
            break;
        
        
    if flag==0:
        count=count+1
print(count)