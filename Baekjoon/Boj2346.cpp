#include <iostream>
#include <deque>
#include <queue>

using namespace std;

deque<pair<int, int>> dq;
queue<int> result;
int N;

int main() {
	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		int input;
		cin >> input;

		dq.push_back({ i, input });
	}

	// Init : 1
	int cur = dq[0].second;
	result.push(dq[0].first);
	dq.pop_front();

	while (!dq.empty())
	{

		if (dq.empty()) break;

		if (cur > 0) {
			for (int i = 0; i < cur; i++) {
				dq.push_back({ dq[0].first, dq[0].second });
				dq.pop_front();
			}
			cur = dq.back().second;
			result.push(dq.back().first);
			dq.pop_back();
		}
		else if (cur < 0) {
			cur *= -1;
			for (int i = 0; i < cur; i++) {
				dq.push_front({ dq.back().first, dq.back().second });
				dq.pop_back();
			}
			cur = dq[0].second;
			result.push(dq[0].first);
			dq.pop_front();
		}

	}

	while (!result.empty())
	{
		cout << result.front() + 1 << " ";
		result.pop();
	}
}