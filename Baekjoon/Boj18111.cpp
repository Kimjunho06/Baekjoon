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
		int inven = 0;//�κ����� �����°� �ʿ��Ѱ�1�� �þ
		int remove = 0;//�����ϴ� �� 2�� �þ ����
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

