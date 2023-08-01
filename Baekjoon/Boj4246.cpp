#include<iostream>

using namespace std;

int main() {
	int n, idx;
	string str, answer;
	bool ck;

	while (true)
	{
		cin >> n >> str;
		answer = "";
		idx = 0;
		ck = false;
		if (n == 0) break;
		
		for (int i = 0; i < n; i++) {
			idx = i;
			ck = false;
			while (idx < str.size())
			{
				answer += str[idx];
				if (!ck) {
					idx += ((n * 2) - 1) - i * 2;
				}
				else {
					idx += 1 + (i * 2);
				}
				ck = !ck;
			}
		}

		cout << answer << "\n";
	}
}