#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vector<vector<int>> draw(n + 5, vector<int>(m + 5));
    vector<vector<bool>> visit(n + 5, vector<bool>(m + 5));
    queue<pair<int, int>> Q;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> draw[i][j];
        }
    }

    int mx = 0;
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (draw[i][j] == 0 || visit[i][j] == 1)
                continue;
            num++;
            visit[i][j] = 1;
            Q.push({i, j});
            int area = 0;
            while (!Q.empty())
            {
                area++;
                pair<int, int> cur = Q.front();
                Q.pop();
                for (int dir = 0; dir < 4; dir++)
                {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                        continue;
                    if (visit[nx][ny] || draw[nx][ny] != 1)
                        continue;
                    visit[nx][ny] = 1;
                    Q.push({nx, ny});
                }
            }
            mx = max(mx, area);
        }
    }
    cout << num << "\n"
         << mx;
}