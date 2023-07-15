#include <iostream>
#include <queue>
using namespace std;
int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int N, M, ans = 0;
        queue <pair<int, int>> q;
        //������������ ����
        priority_queue <int> pq;
        cin >> N >> M;
        for (int i = 0; i < N; i++) {
            int x;
            cin >> x;
            //������ȣ, �߿䵵
            q.push({ i,x });
            pq.push(x);
        }

        while (!q.empty()) {
            //���� �迭�� �ε����� �߿䵵
            int currentPage = q.front().first;
            int currentImportance = q.front().second;
            q.pop();
            //���� �켱������ ���ٸ�.
            if (pq.top() == currentImportance) {
                pq.pop();
                ans++;
                if (currentPage == M) {
                    cout << ans << '\n';
                    break;
                }
            }
            else {
                q.push({ currentPage,currentImportance });
            }
        }
    }
}