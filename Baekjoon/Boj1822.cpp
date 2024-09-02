#include <iostream>
#include <set>

using namespace std;

int main() {
	int nA, nB, input;
	set<int> st;

	cin >> nA >> nB;

	for (int i = 0; i < nA; i++)
	{
		cin >> input;

		st.insert(input);
	}

	for (int i = 0; i < nB; i++)
	{
		cin >> input;
		if (st.find(input) != st.end()) {
			st.erase(input);
		}
	}

	cout << st.size() << "\n";
	for (auto elem : st) {
		cout << elem << " ";
	}
}