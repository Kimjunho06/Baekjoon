#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000001];

int f(int n) {
    if (arr[n] != 0)
        return arr[n];
    if (n == 1) return 0; 

    int cnt = f(n - 1) + 1; 

    if (n % 2 == 0)
        cnt = min(cnt, f(n / 2) + 1);
    if (n % 3 == 0)
        cnt = min(cnt, f(n / 3) + 1);

    arr[n] = cnt;
    return arr[n];
}

int main() {
    int n;
    cin >> n;

    cout << f(n);
}