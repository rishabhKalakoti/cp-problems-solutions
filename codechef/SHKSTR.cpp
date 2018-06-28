#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define sc(a) scanf("%lli",&a)
#define REP(i,N) for(ll i=0;i<N;i++)
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
struct node
{
    ll flag;
    ll endIndex;
    ll index;
    struct node *children[26];
};
struct node *getNode()
{
    struct node *child=new node;
    child->flag=0;
    child->index=0;
    child->endIndex=LLONG_MAX;
    REP(i,26)
        child->children[i]=NULL;
    return child;
}
void dfs(struct node *root, string s)
{
    if(root->flag==1)
        cout<<s<<" "<<root->index<<" "<<root->endIndex<<endl;
    REP(i,26)
    {
        if(root->children[i]!=NULL)
        {
            char c='a'+i;
            dfs(root->children[i],s+c);
        }
    }
    
}
int main() {
    FIO;
    ll N;
    sc(N);
    struct node *root=getNode();
    REP(i,N)
    {
        char s[11];
        scanf("%s",s);
        ll l=strlen(s);
        struct node *ptr=NULL;
        ptr=root;
        REP(j,l)
        {
            if(ptr->children[s[j]-'a'] == NULL)
            {
                struct node *temp=getNode();
                temp->index=i+1;
                ptr->children[s[j]-'a']=temp;
            }
            ptr=ptr->children[s[j]-'a'];
        }
        ptr->flag=1;
        ptr->endIndex=min(i+1,ptr->endIndex);
    }
    //dfs(root,"");
    //printf("\n");
    ll Q;
    sc(Q);
    while(Q--)
    {
        ll r;
        sc(r);
        char s[11];
        scanf("%s",s);
        ll l=strlen(s);
        struct node *ptr=NULL;
        ptr=root;
        string op="";
        REP(i,l)
        {
            if((ptr->children[s[i]-'a']!=NULL) && (ptr->children[s[i]-'a']->index <=r))
            {
                ptr=ptr->children[s[i]-'a'];
                op=op+s[i];
                //printf("1");
            }
            else
            {
               break;
            }
        }
        //cout<<op<<" ";
        while(!((ptr->flag == 1) && (ptr->endIndex<=r)))
        {
            REP(i,26)
            {
                if((ptr->children[i] != NULL) && (ptr->children[i]->index<=r))
                {
                    op+=(i+'a');
                    ptr=ptr->children[i];
                    break;
                }
            }
        }
        cout<<op<<endl;
    }
   return 0;
}