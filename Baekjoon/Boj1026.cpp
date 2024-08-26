#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> A, B;

int main() {
	int N, result = 0;

	cin >> N;
	A.resize(N);
	B.resize(N);
	
	for (int i = 0; i < N; i++)
		cin >> A[i];
	for (int i = 0; i < N; i++)
		cin >> B[i];

	sort(A.begin(), A.end());
	sort(B.begin(), B.end(), greater<int>());

	for (int i = 0; i < N; i++) {
		result += A[i] * B[i];
	}

	cout << result;
}