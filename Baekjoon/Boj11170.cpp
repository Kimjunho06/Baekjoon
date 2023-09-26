#include <iostream>

using namespace std;

int main() {
	int T, n, m;
	int cnt = 0;
	
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> n >> m;
		cnt = 0;

		for (int j = n; j <= m; j++) {
			int tmp = j;
			if (tmp == 0) cnt++;
			while (tmp != 0)
			{
				if (tmp % 10 == 0)
					cnt++;
				
				tmp /= 10;
			}
		}

		cout << cnt << "\n";
	}
}