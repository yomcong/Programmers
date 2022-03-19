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

long long solution(int price, int money, int count)
{
    int answer = 0;
    long long temp = 0;
    for (int i = 1; i <= count; ++i)
    {
        temp += (price * i);
    }

    if (temp > money)
    {
        return (temp - money);
    }
    else
    {
        return 0;
    }

    //return answer;
}