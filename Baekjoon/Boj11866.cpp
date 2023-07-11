#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, m;
	int curIdx = -1;
	vector<int> v;
	vector<int> answer;

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		v.push_back(i+1);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			curIdx++;	
			if (curIdx >= v.size()) {
				curIdx = 0;
			}
		}
		answer.push_back(v[curIdx]);
		v.erase(v.begin() + curIdx);
		curIdx--;
	}

	cout << "<";
	for (int i = 0; i < answer.size(); i++) {
		if (i != 0) {
			cout << ", ";
		}
		cout << answer[i];
	}
	cout << ">";
}