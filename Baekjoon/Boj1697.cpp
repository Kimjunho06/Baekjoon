#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<bool> visited(100001, false);
int n, k;

void FindChild() {
    queue<pair<int, int>> q; // {현재 위치, 경과 시간}
    q.push({ n, 0 }); // 시작 위치와 시간 초기화
    visited[n] = true;

    while (!q.empty()) {
        int front = q.front().first; // 현재 위치
        int sec = q.front().second;  // 경과 시간
        q.pop();

        // 동생 위치에 도착하면 종료
        if (front == k) {
            cout << sec << endl;
            return;
        }

        // 이동 가능한 세 가지 경우에 대해 큐에 삽입
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
