#include <iostream>

using namespace std;

int f(int a, int b) {
	int answer = 1;

	for (int j = 0; j < b; j++) {
		answer *= a;
		answer %= 10;
	}

	if (answer == 0) {
		return 10;
	}
	else {
		return answer;
	}
}

int main() {
	int n;
	int a, b, answer = 1;
	cin >> n;


	for (int i = 1; i <= n; i++) {
		cin >> a >> b;
		
		cout << f(a, b) << endl;
	}
}