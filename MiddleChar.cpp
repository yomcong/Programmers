#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 프로그래머스 1단계 가운데 글자 가져오기

int main()
{
	string s = "qwer";
	string answer = "";

	if (s.size() % 2 == 0)
	{
		answer.push_back(s[(s.size() / 2)-1]);
		answer.push_back(s[s.size() / 2]);
	}
	else
	{
		answer.push_back(s[s.size() / 2]);
	}

	cout << answer << endl;

}