#include <iostream>

using namespace std;

//���Ʈ����
int main() {
	int n, m, b; // ����, ����, �κ� ����
	int arr[501][501] = {}; // m n�� 1~500�����̱⿡
	int sec = 2147000000, maxheight = -1; //
	int inven = 0, remove = 0; // �κ��丮 1�� ���� 2��

	//����, ����, �� ���� 
	cin >> n >> m >> b;
	
	// ���� ���� �� �Է¹ޱ�
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j]; 

	//���̰� 256
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