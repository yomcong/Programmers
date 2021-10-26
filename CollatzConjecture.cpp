#include <string>
#include <vector>
#include <iostream>

using namespace std;
// 사이트에선 안됨 컴파일 문제인듯
int main()
{
    int answer = 0;
    int num = 626331;
    for (int i = 0; i < 502; i++)
    {
        if (num == 1)
        {
            answer = i;
            break;
        }

        if (num % 2 == 0)
        {
            num /= 2;
        }
        else
        {
            num = (num * 3) + 1;
        }
        if (i == 501)
        {
            answer = -1;
        }
    }

    cout << answer << endl;
}
// 정답으로 쓴것
int solution(int num) {
    int answer = 0;
    long long temp = num;

    while (1) {
        if (temp == 1) {
            break;
        }

        if (temp % 2 == 0) {
            temp = temp / 2;
        }
        else {
            temp = temp * 3 + 1;
        }

        answer++;

        if (answer == 500) {
            return -1;
        }
    }

    return answer;
}