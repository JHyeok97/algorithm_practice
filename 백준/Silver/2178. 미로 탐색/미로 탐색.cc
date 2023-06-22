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
    vector<string> board(n + 5);
    vector<vector<int>> dist(n + 5, vector<int>(m + 5, -1));
    for (int i = 0; i < n; i++)
    {
        cin >> board[i];
    }

    queue<pair<int, int>> Q;
    Q.push({0, 0});
    dist[0][0] = 0;
    while (!Q.empty())
    {
        auto cur = Q.front();
        Q.pop();
        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;
            if (dist[nx][ny] >= 0 || board[nx][ny] != '1')
                continue;
            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            Q.push({nx, ny});
        }
    }
    cout << dist[n - 1][m - 1] + 1;
}