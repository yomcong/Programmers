#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 프로그래머스 1단계 문자열 내 p와 y의 개수

int main()
{
	string s = "Pyy";
	bool answer = false;
	int p = 0;
	int y = 0;
	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] == 'p' || s[i] == 'P')
		{
			p++;
		}
		else if (s[i] == 'y' || s[i] == 'Y')
		{
			y++;
		}

	}
	if (p == y)
	{
		answer = true;
	}

	cout << boolalpha <<answer;
}