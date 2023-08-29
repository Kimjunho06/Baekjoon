#include <iostream>
#include <queue>

using namespace std;

string arr[101];
int n, m;
int visited[101][101];
queue<pair<int, int>>q;
int dx[] = { 1, 0, -1, 0 };
int dy[] = { 0, 1, 0, -1 };

void BFS(int x, int y)
{
    q.push({ x, y });
    visited[x][y] = 1;
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (nx >= n || ny >= m) continue;
            if (nx < 0 || ny < 0) continue;
            
            if (arr[nx][ny] == '1' && visited[nx][ny] == 0) {
                q.push({ nx, ny });
                visited[nx][ny] = visited[x][y] + 1;
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    BFS(0, 0);
    cout << visited[n - 1][m - 1];
}