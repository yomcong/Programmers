#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int arr[2000];

//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cout.tie(nullptr);
//	cin.tie(nullptr);
//
//
//}

int solution(int n) {
    int answer = 2;

    while (true)
    {
        if (n % answer == 1)
            return answer;

        answer++;
    }


    return answer;
}