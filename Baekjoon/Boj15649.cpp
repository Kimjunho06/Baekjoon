#include <iostream>

using namespace std;

bool arr[10] = {};
int ar[9] = {};
void BackTracking(int n, int m, int cnt) {
	if (cnt == m) {
		for (int i = 0; i < n; i++) {
			if (ar[i] != 0) {
				cout << ar[i] << " ";
			} 
		}
		cout << "\n";
	}
	else {
		for (int i = 1; i <= n; i++) {
			if (arr[i]) continue;
			
			arr[i] = true;
			ar[cnt] = i;
			BackTracking(n, m, cnt + 1);
			ar[cnt] = 0;
			arr[i] = false;
		}
	}
}

int main() {
	int n, m;

	cin >> n >> m;

	BackTracking(n, m, 0);
}