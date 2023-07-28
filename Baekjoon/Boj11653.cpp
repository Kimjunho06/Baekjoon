#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	vector<int> answer;
	cin >> n;

	while (n != 1)
	{
		for (int i = 2; i <= n; i++) {
			if (n % i == 0) {
				answer.push_back(i);
				n /= i;
				break;
			}
		}
	}

	for (auto a : answer) {
		cout << a << "\n";
	}
}