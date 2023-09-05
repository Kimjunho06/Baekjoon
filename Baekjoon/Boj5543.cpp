#include <iostream>
#include <queue>

using namespace std;

int main() {
	priority_queue<int, vector<int>, greater<int>> pq1;
	priority_queue<int, vector<int>, greater<int>> pq2;

	int a, b, c;
	int x, y;

	cin >> a >> b >> c;
	cin >> x >> y;

	pq1.push(a);
	pq1.push(b);
	pq1.push(c);

	pq2.push(x);
	pq2.push(y);

	cout << pq1.top() + pq2.top() - 50;
}