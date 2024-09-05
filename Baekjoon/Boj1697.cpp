#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<bool> visited(100001, false);
int n, k;

void FindChild() {
    queue<pair<int, int>> q; // {���� ��ġ, ��� �ð�}
    q.push({ n, 0 }); // ���� ��ġ�� �ð� �ʱ�ȭ
    visited[n] = true;

    while (!q.empty()) {
        int front = q.front().first; // ���� ��ġ
        int sec = q.front().second;  // ��� �ð�
        q.pop();

        // ���� ��ġ�� �����ϸ� ����
        if (front == k) {
            cout << sec << endl;
            return;
        }

        // �̵� ������ �� ���� ��쿡 ���� ť�� ����
        if (front + 1 <= 100000 && !visited[front + 1]) {
            visited[front + 1] = true;
            q.push({ front + 1, sec + 1 });
        }
        if (front - 1 >= 0 && !visited[front - 1]) {
            visited[front - 1] = true;
            q.push({ front - 1, sec + 1 });
        }
        if (front * 2 <= 100000 && !visited[front * 2]) {
            visited[front * 2] = true;
            q.push({ front * 2, sec + 1 });
        }
    }
}

int main() {
    cin >> n >> k;
    FindChild();
}
