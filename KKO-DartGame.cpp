#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 프로그래머스 1단계 다트 게임(KKO)

int main()
{
	string dartResult = "10D2S0T";
	int answer = 0;
	int temp[3] = {};
	int T = 0;
	for (int i = 0; i < dartResult.size(); ++i)
	{
		if (dartResult[i] >= 48 && dartResult[i] <= 57)
		{
			if (dartResult[i]=='1' && dartResult[i + 1] == '0')
			{
				if (i != 0)
				{
					++T;
				}
				temp[T] = 10;
			}
			else if (dartResult[i] == '0' && dartResult[i - 1] == '1')
			{
				continue;
			}
			else
			{
				if (i != 0)
				{
					++T;
				}
				temp[T] = dartResult[i] - 48;
			}
		}
		else
		{
			switch (dartResult[i])
			{
			case'D':
				temp[T] *= temp[T];
				break;
			case'T':
				temp[T] *= (temp[T] * temp[T]);
				break;
			case'*':
				if (T == 0)
				{
					temp[T] *= 2;
				}
				else
				{
					temp[T - 1] *= 2;
					temp[T] *= 2;
				}
				break;
			case'#':
				temp[T] *= -1;
				break;
			}
		}

	}
	for (int i = 0; i <= T; ++i)
	{
		answer += temp[i];
	}

	cout << answer;

}