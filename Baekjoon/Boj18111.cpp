#include <iostream>

using namespace std;

int main() {
	int n, m, b;
	int arr[502][502] = {};
	int sec = INT_MAX;
	int maxheight = -1;

	cin >> n >> m >> b;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];

	for (int height = 0; height <= 256; height++) {
		int inven = 0;//인벤에서 꺼내는게 필요한거1초 늘어남
		int remove = 0;//제거하는 양 2초 늘어남 개수
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				int curheight = arr[i][j] - height;
				if (curheight < 0) inven -= curheight;
				else remove += curheight;
			}
		}
		if (remove + b >= inven) {
			int ttime = 2 * remove + inven;
			if (sec >= ttime) {
				sec = ttime;
				maxheight = height;
			}
		}
	}
	cout << sec << " " << maxheight;
}

