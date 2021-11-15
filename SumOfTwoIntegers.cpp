#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 프로그래머스 1단계 두 정수 사이의 합

int main()
{
	int a = 5;
	int b = 3;
	int answer = 0;
	if (a > b)
	{
		for (int i = b; i <= a; ++i)
		{
			answer += i;
		}
	}
	else if( a<b)
	{
		for (int i = a; i <= b; ++i)
		{
			answer += i;
		}
	}
	else
	{
		answer = a;
	}

	cout << answer;


}