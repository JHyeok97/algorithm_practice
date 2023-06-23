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
    int r, c;
    cin >> r >> c;
    vector<vector<char>> Apart(r, vector<char>(c));
    vector<vector<int>> Ftime(r, vector<int>(c));
    vector<vector<int>> Jtime(r, vector<int>(c));
    queue<pair<int, int>> FQ;
    queue<pair<int, int>> JQ;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> Apart[i][j];
            if (Apart[i][j] == 'F')
                FQ.push({i, j});
            if (Apart[i][j] == 'J')
            {
                JQ.push({i, j});
                Ftime[i][j] = -1;
            }
            if (Apart[i][j] == '.')
            {
                Ftime[i][j] = -1;
                Jtime[i][j] = -1;
            }
        }
    }

    while (!FQ.empty())
    {
        auto cur = FQ.front();
        FQ.pop();
        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= r || ny < 0 || ny >= c)
                continue;
            if (Ftime[nx][ny] >= 0 || Apart[nx][ny] == '#')
                continue;

            Ftime[nx][ny] = Ftime[cur.X][cur.Y] + 1;
            FQ.push({nx, ny});
        }
    }
    while (!JQ.empty())
    {
        auto cur = JQ.front();
        JQ.pop();
        for (int dir = 0; dir < 4; dir++)
        {
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= r || ny < 0 || ny >= c)
            {
                cout << Jtime[cur.X][cur.Y] + 1;
                return 0;
            }
            if (Jtime[nx][ny] >= 0 || Apart[nx][ny] == '#')
                continue;
            if (Jtime[cur.X][cur.Y] + 1 >= Ftime[nx][ny] && Ftime[nx][ny] != -1)
                continue;

            Jtime[nx][ny] = Jtime[cur.X][cur.Y] + 1;
            JQ.push({nx, ny});
        }
    }
    cout << "IMPOSSIBLE";
}