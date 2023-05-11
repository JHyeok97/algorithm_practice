#include <bits/stdc++.h>
using namespace std;

const double PI = 3.1415926;

int main()
{
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        bool flag = 0;
        double T;
        int degree;

        cin >> T >> degree;

        double x = 85 / tan((degree * PI) / 180);
        double dist = x;
        double Left = T * 100 + 16 / sin((degree * PI) / 180);
        double Right = T * 100 - 16 / sin((degree * PI) / 180);

        while (dist <= Left)
        {
            if (dist <= Left && dist >= Right)
            {
                cout << "yes\n";
                flag = 1;
                break;
            }
            dist += x;
        }
        if (!flag)
            cout << "no\n";
    }
}