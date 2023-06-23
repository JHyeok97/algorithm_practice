#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> time(100001, -1);
    queue<int> Q;

    time[n] = 0;
    Q.push(n);

    while (!Q.empty())
    {
        int cur = Q.front();
        Q.pop();
        int dx[3] = {-1, 1, cur};
        for (int dir = 0; dir < 3; dir++)
        {
            int nx = cur + dx[dir];
            if (nx < 0 || nx > 100000)
                continue;
            if (time[nx] >= 0)
                continue;

            time[nx] = time[cur] + 1;
            Q.push(nx);
        }
    }

    cout << time[k];
}