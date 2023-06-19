#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(11);

    v[0] = 1;
    v[1] = 2;
    v[2] = 4;
    for (int i = 3; i < 11; i++)
    {
        v[i] = v[i - 1] + v[i - 2] + v[i - 3];
    }
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;

        cout << v[num - 1] << endl;
    }
}