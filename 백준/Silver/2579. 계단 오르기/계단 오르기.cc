#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> score(n + 5, 0);
    vector<vector<int>> d(n + 5, vector<int>(2, 0));

    for (int i = 1; i <= n; i++)
    {
        cin >> score[i];
    }

    d[1][0] = score[1];
    d[1][1] = 0;
    d[2][0] = score[2];
    d[2][1] = score[1] + score[2];

    for (int i = 3; i <= n; i++)
    {
        d[i][0] = max(d[i - 2][0], d[i - 2][1]) + score[i];
        d[i][1] = d[i - 1][0] + score[i];
    }
    cout << max(d[n][0], d[n][1]);
}