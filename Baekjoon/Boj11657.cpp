#include <iostream>
#include <vector>
#include <tuple> // 2tuple => pair


using namespace std;
typedef tuple<int, int, int> edge;

int main() {
	int n, m; // n ����� ��, m ������ ��
	int f, s, t; // ������, ����, ����ġ
	bool minus = false; // ���� ����Ŭ Ȯ��
	vector<long> dis; // ���� ����
	vector<edge> edges; // ���� ����

	cin >> n >> m;
	dis.resize(n + 1); // 0�� �Ⱦ�
	fill(dis.begin(), dis.end(), 2147483647); // �������� �������ִ� ���� long �ִ밪

	// ���� �� ä���
	for (int i = 0; i < m; i++) {
		cin >> f >> s >> t;

		edges.push_back({ f, s, t });
	}

	// ���� ��� ����
	dis[1] = 0; 

	for (int i = 0; i < n - 1; i++) { // n - 1�� �ݺ�
		for (int j = 0; j < m; j++) { // ��� ������ Ž����
			edge medge = edges[j];
			f = get<0>(medge); // tuple�� ���ҿ� �����ϰ� ���ִ� ��
			s = get<1>(medge);
			t = get<2>(medge);

			if (dis[f] != 2147483647 && dis[s] > dis[f] + t) { // ���ǿ� �´ٸ� ����
				dis[s] = dis[f] + t; 
			}
		}
	}

	// ���� ����Ŭ Ȯ��
	for (int j = 0; j < m; j++) {
		edge medge = edges[j];
		f = get<0>(medge);
		s = get<1>(medge);
		t = get<2>(medge);

		if (dis[f] != 2147483647 && dis[s] > dis[f] + t) {
			minus = true;
		}
	}

	if (minus) {
		// ���� ����Ŭ�� ���� ������ ���������� �� �� �ֱ⿡
		cout << -1 << "\n";
	}
	else {
		for (int i = 2; i <= n; i++) {
			if (dis[i] == 2147483647) // ��ΰ� ��� ������ �� ���� �ȵ� ���� (= ���� ���� ����)
				cout << -1 << "\n";
			else
				cout << dis[i] << "\n"; // ���� ���Ͱ� n + 1�������� n - 1 ���� �ٿ� ���� ����ϱ� ���� 2������ ����
		}
	}
}