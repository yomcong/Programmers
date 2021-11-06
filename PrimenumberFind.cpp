#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <ctime>
#include <stack>

using namespace std;
// 프로그래머스 1단계 소수찾기

int main()
{
    int n = 10;
    int answer = 0;
    int num[100000] = {};
    for (int i = 2; i <= n; i++)
    {
        if (num[i] == 1)
            continue;

        for (int j = i * 2; j <= n; j += i) {
            num[j] = 1;
        }
    }
    for (int i = 2; i <= n; i++) {
        if (num[i] == 0)
            answer++;
    }
    cout << answer;

}

// 백터에 ~n 까지에 값을 푸시백하고
// 순회해서 순회중 소수를 찾으면 해당 소수에 배수를 find해서 earse 하고 
// 마지막에 해당 백터에 사이즈를 반환 하려했으나
// 에라토스테네스의 체 가 비슷하면서 좀더 효율적인것 같아서 활용