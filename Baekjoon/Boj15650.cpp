#include <iostream>

using namespace std;

bool arr[10] = {};
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
            if (arr[i]) continue;

            arr[i] = true;
            ar[cnt] = i;
            BackTracking(n, m, cnt + 1, i + 1);
            arr[i] = false;
        }
    }
}

int main() {
    int n, m;

    cin >> n >> m;

    BackTracking(n, m, 0, 1);
}