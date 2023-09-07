#include <iostream>
using namespace std;
int dp[1001];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    cin >> num;

    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= num; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
        dp[i] %= 10007;
    }

    cout << dp[num];
    return 0;
}