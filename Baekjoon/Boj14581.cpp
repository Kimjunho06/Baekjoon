#include <iostream>

using namespace std;

int main() {
	string a;

	cin >> a;

	for (int i = 0; i < 9; i++) {
		if (i == 4) {
			cout << ":" << a << ":";
		}
		else {
			cout << ":fan:";
		}
		switch (i)
		{
		case 2:
		case 5:
		case 8:
			cout << "\n";
			break;
		}
	}
}