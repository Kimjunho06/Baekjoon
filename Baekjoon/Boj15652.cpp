#include <iostream>

using namespace std;

int ar[9] = {};

void BackTracking(int n, int m, int cnt, int start) {
    if (cnt == m) {
        for (int i = 0; i < m; i++) {
            cout << ar[i] << " ";
        }
        cout << "\n";
    }
    else {
        for (int i = start; i <= n; i++) {
            ar[cnt] = i;
            BackTracking(n, m, cnt + 1, i);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    BackTracking(n, m, 0, 1);
    return 0;
}