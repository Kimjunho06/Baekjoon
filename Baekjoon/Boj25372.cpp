#include <iostream>

using namespace std;

int main(){
	int n;
	string str;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str;

		if (str.size() < 6 || str.size() > 9) {
			cout << "no\n";
		}
		else {
			cout << "yes\n";
		}
	}
}