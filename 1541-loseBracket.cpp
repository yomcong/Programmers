#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <math.h>
#include <string>
#include <list>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	string s = "";
	cin >> s;
	string num=  "";

	int answer = 0;

	bool isMinus = false;
	int temp = 0;
	
	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] == '-')
		{
			if (isMinus)
			{
				temp += stoi(num);
				answer -= temp;
				temp = 0;
			}
			else
			{
				answer += stoi(num);
				isMinus = true;
			}
			num = "";

		}
		else if (s[i] == '+')
		{
			if (isMinus)
			{
				temp += stoi(num);
			}
			else
			{
				answer += stoi(num);
			}
			num = "";
		}
		else
		{
			num += s[i];
		}

		if (i == s.length()-1)
		{
			if (isMinus)
			{
				temp += stoi(num);
				answer -= temp;
			}
			else
			{
				answer += stoi(num);
			}
		}

	}

	cout << answer;
}






