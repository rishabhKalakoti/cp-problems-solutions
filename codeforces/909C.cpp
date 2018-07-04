#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <cmath>
using namespace std;
const int MAXN = 5100;
typedef long long ll;
int N;
ll MOD = 1e9+7;
ll memo[MAXN][MAXN];
string ar[MAXN];
void input(){
	cin >> N;
	for(int i = 1 ; i <= N ; i++)
		cin >> ar[i];
}

void solve(){
	memo[1][1] = 1;
	for(int i = 2 ; i <= N ; i++){
		if(ar[i-1] == "f"){
			for(int level = 2 ; level <= N ; level++){
				memo[i][level] = memo[i-1][level-1]; 
			}
		}
		else{
			ll tot = 0;
			for(int level = 1 ; level <= N ; level++){

				tot += memo[i-1][level];
				
				if(tot >= MOD)
					tot -= MOD;
			}
			for(int level = 1 ; level <= N ; level++){

				memo[i][level] = tot;

				tot -= memo[i-1][level];

				if(tot < 0)
					tot += MOD;
			}
		}
	}
	ll ans = 0;
	for(int level = 1 ; level <= N ; level++){

		ans += memo[N][level];
		if(ans >= MOD)
			ans -= MOD;
	}
	cout << ans;
}


int main(){

	ios::sync_with_stdio(0);
	cin.tie(0);


	input();
	solve();


	return 0;
}