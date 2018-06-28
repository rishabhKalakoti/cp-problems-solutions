#include <iostream>

using namespace std;

const int mod = 100000007;

int main() {
    int T, N;
    cin >> T;
    for(int c = 0; c < T; c ++){
        cin >> N;
        int sum = 0;
        for(int i = 0; i < N; i ++){
            int x;
            cin >> x;
            sum = (sum + x) % mod;
        }
        int pw = 1;
        for(int i = 1; i < N; i ++){
            pw = pw * 2 % mod;
        }
        cout << "Case " << c + 1 << ": " << 1LL * sum * pw % mod << endl;
    }
    
    return 0;
}