#include<bits/stdc++.h>
using namespace std;
int r=0;
string lol="No job for Ada?";
deque<int>Q;
void backQ()
{
    if(Q.size()==0)
    {
        cout<<lol;
        return;
    }
    cout<<Q.back();
    Q.pop_back();
}
void frontQ()
{
    if(Q.size()==0)
    {
        cout<<lol;
        return;
    }
    cout<<Q.front();
    Q.pop_front();
}
void reverseQ()
{
    if(r==0)
        r=1;
    else r=0;
}
void to_front(int n)
{
    Q.push_front(n);
}
void to_back(int n)
{
    Q.push_back(n);
}
int main()
{
    int q;
    cin>>q;
    // back,front,reverse,to_back,to_front
    while(q--)
    {
        string s;
        cin>>s;
        if(s=="reverse")
            reverseQ();
        else if(s=="back")
        {
            if(r==0)
                backQ();
            else
                frontQ();
            cout<<endl;
        }
        else if(s=="front")
        {
            if(r==0)
                frontQ();
            else
                backQ();
            cout<<endl;
        }
        else if(s=="push_back")
        {
            int n;
            cin>>n;
            if(r==0)
                to_back(n);
            else
                to_front(n);
        }
        else if(s=="toFront")
        {
            int n;
            cin>>n;
            if(r==1)
                to_back(n);
            else
                to_front(n);
        }
    }
    return 0;
}