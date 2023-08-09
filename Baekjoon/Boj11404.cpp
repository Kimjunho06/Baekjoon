#include <iostream>

using namespace std;

#define endl '\n'
#define INF 987654321
#define MAX 101

int n, m;
int city[MAX][MAX];

void input()
{
	cin >> n >> m;

	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= n; ++j)
			city[i][j] = INF;

	for (int i = 0; i < m; ++i)
	{
		int st, en, cost;
		cin >> st >> en >> cost;

		city[st][en] = min(city[st][en], cost);
	}
}

void floyd()
{
	for (int bridge = 1; bridge <= n; ++bridge)
		for (int from = 1; from <= n; ++from)
			for (int to = 1; to <= n; ++to)
				city[from][to] = min(city[from][to], city[from][bridge] + city[bridge][to]);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	input();
	floyd();

	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= n; ++j)
		{
			if (i == j || city[i][j] == INF)
				cout << 0 << ' ';
			else
				cout << city[i][j] << ' ';
		}
		cout << endl;
	}

	return 0;
}