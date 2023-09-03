#include <iostream>
#include <queue>

using namespace std;

int main() {
	int a, b, c;
	priority_queue<int, vector<int>, greater<int>> pq;

	cin >> a >> b >> c;
	pq.push(a);
	pq.push(b);
	pq.push(c);

	while (!pq.empty())
	{
		cout << pq.top() << " ";
		pq.pop();
	}
}