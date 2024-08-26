#include <iostream>
#include <vector>

using namespace std;

int N, M;

char arr[51][51];
bool check[51][51];

void Check(int i, int j, char character) {
	if (i >= N || j >= M) return;
	if (arr[i][j] != character) return;

	check[i][j] = true;

	if (character == '-') {
		Check(i, j + 1, character);
	}
	else {
		Check(i + 1, j, character);
	}
}

int main() {
	int result = 0;

	cin >> N >> M;
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (check[i][j]) continue;
			Check(i, j, arr[i][j]);

			result++;
		}
	}

	cout << result;
}