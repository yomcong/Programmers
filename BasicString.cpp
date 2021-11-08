#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 프로그래머스 1단계 문자열 다루기 기본

int main()
{
	string s = "1234";
	bool answer = false;

	if (s.size() == 4 || s.size() == 6)
	{
		for (int i = 0; i < s.size(); ++i)
		{
			if (s[i] >= 48 && s[i] <= 57)
			{
				answer = true;
			}
			else
			{
				answer = false;
				break;
			}
		}
	}

	cout << boolalpha << answer;

}