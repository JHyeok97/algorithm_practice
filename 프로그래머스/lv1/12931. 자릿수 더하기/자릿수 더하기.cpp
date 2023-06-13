#include <iostream>
#include <string>

using namespace std;
int solution(int n)
{
     int answer = 0;
    int num = n;

    for (int i = 1; i <= n; i *= 10)
    {
        answer += num % 10;
        num = num / 10;
    }

    return answer;
}