#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <ctime>
#include <stack>

using namespace std;
// 프로그래머스 2단계 jadenCase 문자열 만들기

int main()
{
	string s1 = "3people Unfollowed Me";
	string s2 = "for the last week";
	string answer = "";
	bool temp = true;

	for (int i = 0; i < s1.size(); ++i)
	{
		if (temp && (s1[i] >= 97 && s1[i] <= 122))
		{
			s1[i] -= 32;
			temp = false;
		}
		else if(!temp && (s1[i] >= 65 && s1[i] <= 90))
		{
			s1[i] += 32;
			temp = false;
		}
		else
		{
			temp = false;
		}

		if (s1[i] == ' ')
		{
			temp = true;
		}
	}
	cout << s1;
}