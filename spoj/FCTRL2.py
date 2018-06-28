T=int(input())
for i in range(T):
    N=int(input())
    j=1;
    fact=1;
    while j<=N:
        fact=fact*j
        j=j+1
    print(fact)
