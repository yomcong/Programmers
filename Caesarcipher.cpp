#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <ctime>
#include <stack>

using namespace std;
// 프로그래머스 1단계 시저 암호

int main()
{
	string s = "a B z";
	int n = 25;
	string temp="";

	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] == ' ')
		{
			temp += ' ';
			continue;
		}
		if ((s[i] <= 90 && s[i] + n > 90) ||(s[i] >= 97 && s[i] + n > 122))
		{
			temp += s[i] - (26 - n);
		}
		else
		{
			temp += s[i] + n;
		}
		
	}

	cout << temp << endl;



	// 
	// 
}
