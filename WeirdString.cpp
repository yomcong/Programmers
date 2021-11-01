#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <ctime>
#include <stack>

using namespace std;
// 프로그래머스 1단계 이상한 문자 만들기

int main()
{
	string str = "try hello world";
	string answer = "";
	int index = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == ' ')
		{
			answer += ' ';
			index = 0;
			continue;
		}
		
		if (index % 2 == 0)
		{
			answer += toupper(str[i]);
		}
		else
		{
			answer += tolower(str[i]);
		}
		index++;
	}

	cout << answer << endl;

	// 아스키 코드로 대문자인지 소문자인지 구분후 아스키코드값으로 변환 해주려 했으나 
	// 소문자 ,대문자 형변환이 있어서 활용
}
