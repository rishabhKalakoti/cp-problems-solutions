#include <bits/stdc++.h>
using namespace std;
#define test ll T;sc(T);while(T--)
#define lf printf("\n")
#define sc(n) scanf("%lli",&n)
#define sc2(n,m) scanf("%lli%lli",&n,&m)
#define REP(i,n) for(ll i=0;i<n;i++)
#define ll long long int
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL)
#define N_MAX 1000005

ll N,ans=0,flag=0;

struct{
    ll left=0;
    ll right=0;
}adj[N_MAX];

typedef struct st{
    struct st *left=NULL;
    struct st *right=NULL;
    ll maxVal=0;
    ll minVal=0;
}node;

node* dfs(ll id)
{
    node *tmp,*leftChild,*rightChild;
    tmp = (node*)malloc(sizeof(node));
    
    // base case
    if(adj[id].left==-1){
        tmp->maxVal = adj[id].right;
        tmp->minVal = adj[id].right;
        return tmp;
    }
    
    // recursive calls
    leftChild = dfs(adj[id].left);
    rightChild = dfs(adj[id].right);
    
    // invalid check
    if((leftChild->minVal < rightChild->minVal && leftChild->maxVal > rightChild->minVal)
    || (rightChild->minVal < leftChild->minVal && rightChild->maxVal > leftChild->minVal))
        flag=1;
    if(flag==1)
        return tmp;
    
    // invert check
    if(leftChild->minVal > rightChild->minVal)
        ans++;
    tmp->minVal = min(leftChild->minVal,rightChild->minVal);
    tmp->maxVal = max(leftChild->maxVal,rightChild->maxVal);
    return tmp;
}

int main()
{
    //FIO;
    test
    {
        ans=0;
        sc(N);
        for(ll i=1;i<=N;i++)
            sc2(adj[i].left,adj[i].right);
        flag=0;
        dfs(1);
        if(flag==1)
            ans=-1;
        printf("%lli\n",ans);
    }
    return 0;
}