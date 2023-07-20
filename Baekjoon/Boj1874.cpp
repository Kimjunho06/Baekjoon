#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n, insertCnt = 1;
	int input;
	stack<int> s;
	queue<char> q;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;

		while (true)
		{
			if (!s.empty()) {
				if (s.top() == input) {
					q.push('-');
					s.pop();
					break;
				}
				else if (s.top() < input) {
					q.push('+');
					s.push(insertCnt);
					insertCnt++;
				}
				else if (s.top() > input) {
					cout << "NO";
					return 0;
				}
			}
			else {
				s.push(insertCnt);
				q.push('+');
				insertCnt++;
			}
		}
	}

	while (!q.empty())
	{
		cout << q.front() << "\n";
		q.pop();
	}
}