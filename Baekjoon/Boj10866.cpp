#include <iostream>
#include <deque>

using namespace std;

int main() {
	int n;
	deque<int> dq;
	string str;
	int value;
	cin >> n;

	while (n--)
	{
		cin >> str;
		
		if (str == "push_back") {
			cin >> value;
			dq.push_back(value);
		}
		if (str == "push_front") {
			cin >> value;
			dq.push_front(value);
		}
		if (str == "pop_back") {
			if (!dq.empty()) {
				cout << dq.back() << "\n";
				dq.pop_back();
			}
			else {
				cout << -1 << "\n";
			}
		}
		if (str == "pop_front") {
			if (!dq.empty()) {
				cout << dq.front() << "\n";
				dq.pop_front();
			}
			else {
				cout << -1 << "\n";
			}
		}
		else if (str == "size") {
			cout << dq.size() << "\n";
		}
		else if (str == "empty") {
			cout << dq.empty() << "\n";
		}
		else if (str == "front") {
			if (!dq.empty()) {
				cout << dq.front() << "\n";
			}
			else {
				cout << -1 << "\n";
			}
		}
		else if (str == "back") {
			if (!dq.empty()) {
				cout << dq.back() << "\n";
			}
			else {
				cout << -1 << "\n";
			}
		}
	
	}
}