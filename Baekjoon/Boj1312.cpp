#include <iostream>

using namespace std;

using namespace std;
int main() {
    int a, b, n;
    int ans = 0;
    
    cin >> a >> b >> n;
    
    for (int i = 0; i < n + 1; i++) {
        ans = a / b;
        a = a % b * 10;
    }
    
    cout << ans;
}