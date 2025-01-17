#include <iostream>
#include <queue>
#include <string>

using namespace std;

#define X first
#define Y second

int dist[102][102];
string board[102];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
queue<pair<int, int>> Q;
int n, m;

void bfs(void)
{
    dist[0][0] = 1;
    Q.push({0, 0});
    while (!Q.empty())
    {
        pair<int, int> cur = Q.front();
        Q.pop();

        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
            {
                continue;
            }
            if (dist[nx][ny] != 0 || board[nx][ny] == '0')
            {
                continue;
            }

            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            Q.push({nx, ny});
        }
    }
}

int main(void)
{

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> board[i];
    }
    bfs();
    cout << dist[n - 1][m - 1];
    return 0;
}