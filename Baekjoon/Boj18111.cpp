#include <iostream>

using namespace std;

//브루트포스
int main() {
	int n, m, b; // 세로, 가로, 인벤 개수
	int arr[501][501] = {}; // m n이 1~500까지이기에
	int sec = 2147000000, maxheight = -1; //
	int inven = 0, remove = 0; // 인벤토리 1초 삭제 2초

	//가로, 세로, 템 개수 
	cin >> n >> m >> b;
	
	// 가로 세로 값 입력받기
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j]; 

	//높이가 256
	for (int i = 0; i <= 256; i++) {
		inven = 0;
		remove = 0;
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				int curheight = arr[j][k] - i;
				if (curheight < 0) inven -= curheight;
				else remove += curheight;
			}
		}
		if (remove + b >= inven) {
			int ttime = 2 * remove + inven;
			if (sec >= ttime) {
				sec = ttime;
				maxheight = i;
			}
		}
	}
	cout << sec << " " << maxheight;
}