#include <bits/stdc++.h>
using namespace std ;
 
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define mem(x,val) memset((x),(val),sizeof(x))
#define all(x) x.begin(),x.end()
#define pb push_back
#define mp make_pair
#define PI acos(-1.0) 
#define MAXN 11111
 
const int INF = 1 << 29 ;
typedef long long ll ;
typedef pair < int , int > pii ;
 
int dp[MAXN][MAXN] ;
string s ;
 
int solve(int i , int j) {
    if(i>=j) return 0 ;
    if(dp[i][j]) return dp[i][j]  ;
 
    if(s[i] == s[j]) return dp[i][j] = solve(i+1 , j-1) ;
    else return dp[i][j] = 1 + min(solve(i , j-1) , solve(i+1 , j)) ;
}
 
int main() {
    int t ;
    scanf("%d" , &t) ;
 
    while(t--) {
        mem(dp , 0) ;
        cin >> s ;
        printf("%d\n" , solve(0 , s.length() -1)) ;
    }
                
    return 0 ;
}