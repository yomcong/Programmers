#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 프로그래머스 1단계 같은 숫자는 싫어

int main()
{
	vector<int> arr = { {1}, {1}, {3} , {3}, {0}, {1}, {1} };
	vector<int> answer = {};
	answer.push_back(arr[0]);
	
	for (int i = 1; i < arr.size(); ++i)
	{
		if (answer.back() != arr[i])
		{
			answer.push_back(arr[i]);
		}
	}

	for (auto elem : answer)
	{
		cout << elem << endl;
	}
}