#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

const int MAX = 300005;

int N;
int data[MAX];
long long prefix[MAX];

int main() {
    scanf("%d", &N);
    for (int i = 1; i <= N; i ++) {
        scanf("%d", &data[i]);
    }
    sort(data + 1, data + N + 1);
    for (int i = 1; i <= N; i ++) {
        prefix[i] = prefix[i - 1] + data[i];
    }
    long long result = 1LL << 55, all = prefix[N];
    for (int i = 1; i <= N; i ++) {
        result = min(result, all - 1LL * (N - i + 1) * data[i]);
    }
    printf("%lld\n", result);
    
    return 0;
}