T,N=input().split(" ")
T=int(T)
N=int(N)
frn=0
friends=dict()
for i in range(T):
    name, exp=input().split(" ")
    if name in friends:
        friends[name]=friends[name]+int(exp)
    else:
        frn=frn+1
        friends[name]=int(exp)
costs=[]
for key in friends.keys():
    costs.append(friends[key])
costs.sort()
e=0
m=min(frn,N)
for i in range(m):
    e=e+costs[frn-1-i]
print(e)