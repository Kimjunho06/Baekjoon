#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int n;
	cin >> n;

	stack<int> st;
	vector<int> arr(n + 1);
	vector<int> result(n + 1, -1);

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++)
	{
		while (!st.empty() && arr[st.top()] < arr[i])
		{
			result[st.top()] = arr[i];
			st.pop();
		}
		st.push(i);
	}

	for (int i = 0; i < n; i++)
	{
		cout << result[i] << ' ';
	}
}
