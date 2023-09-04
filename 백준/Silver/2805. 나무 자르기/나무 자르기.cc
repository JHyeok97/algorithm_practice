#include <bits/stdc++.h>
using namespace std;

long long n, m, h, result;
long long start, last;
vector<int> vec;

void solution()
{

    while (start <= last)
    {
        h = (start + last) / 2;

        long long total = 0;
        for (int i = 0; i < n; i++)
        {
            if (vec[i] > h)
                total += vec[i] - h;
        }
        if (m > total)
            last = h - 1;
        else
        {
            result = h;
            start = h + 1;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        long long tree;
        cin >> tree;
        vec.push_back(tree);
    }
    last = *max_element(vec.begin(), vec.end());
    solution();

    cout << result;
}
