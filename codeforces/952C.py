n=int(input())
arr=input().split(" ")
for i in range(len(arr)):
    arr[i]=int(arr[i])
flag=0
while (flag==0):
    flag=0
    maxX=0
    for i in range(len(arr)-1):
        if ((arr[i+1]-arr[i])>1) or ((arr[i]-arr[i+1])>1):
            flag=1
            print("NO")
            break
        if(arr[i+1] > arr[maxX]):
            maxX=i+1
    if maxX==(len(arr)):
        print("YES")
        flag=1
    else:
        num=arr.pop(maxX)
        #arr.append(num)