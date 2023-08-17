#include <iostream>
#include <map>

using namespace std;

int main() {
	int n, m, cnt = 0;
	map<string, int> mp;
	map<int, string> answer;
	string input;

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		cin >> input;
		
		if (mp.find(input) != mp.end()) {
			mp.find(input)->second = i;
		}
		mp.insert({input, i});
	}
	
	for (auto iter = mp.begin(); iter != mp.end(); iter++) {
		answer.insert({ iter->second, iter->first });
	}

	for (auto iter = answer.begin(); iter != answer.end(); iter++) {
		if (cnt == n) break;
		cout << iter->second << "\n";
		cnt++;
	}
}