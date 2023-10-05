#include <iostream>
#include <map>

using namespace std;

map<char, pair<char, char>> mp;
char parentNode, leftNode, rightNode;
int n;

void pre(char node) {
	if (mp.find(node) == mp.end()) return;
	cout << node;
	pre(mp.find(node)->second.first);
	pre(mp.find(node)->second.second);
}

void in(char node) {
	if (mp.find(node) == mp.end()) return;

	in(mp.find(node)->second.first);
	cout << node;
	in(mp.find(node)->second.second);
}

void post(char node) {
	if (mp.find(node) == mp.end()) return;
	
	post(mp.find(node)->second.first);
	post(mp.find(node)->second.second);
	cout << node;
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> parentNode >> leftNode >> rightNode;

		if (mp.find(parentNode) == mp.end()) {
			mp.insert({ parentNode, { leftNode, rightNode } });
		}
	}

	pre('A'); 
	cout << "\n";
	in('A');
	cout << "\n";
	post('A');
	cout << "\n";
}