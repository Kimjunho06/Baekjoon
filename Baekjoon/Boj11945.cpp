#include <iostream>
#include <stack>

using namespace std;

int main() {
	int n, m;
	string input;
	stack<int> stc;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> input;
		for (int j = 0; j < m; j++) {
			stc.push(input[j] - '0');
		}

		while (!stc.empty())
		{
			cout << stc.top();
			stc.pop();
		}

		cout << "\n";
	}
}