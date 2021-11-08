#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 프로그래머스 1단계 나누어 떨어지는 숫자 배열

int main()
{
	vector<int> arr = { {3}, {2}, {6} , {3} };
	int divisor = 10;
	vector<int> answer = {};

	for (int i = 0; i < arr.size(); ++i)
	{
		if (arr[i] % divisor == 0)
		{
			answer.push_back(arr[i]);
		}
	}
	if (answer.size() == 0)
	{
		answer.push_back(-1);
	}
	else
	{
		sort(answer.begin(), answer.end());

	}

	for (auto temp : answer)
	{
		cout << temp << endl;
	}
}