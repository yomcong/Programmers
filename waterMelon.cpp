#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <ctime>
#include <stack>

using namespace std;
// 프로그래머스 1단계 수박수박수박?

int main()
{
	int n = 4;
	string answer = "";

	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			answer += "수";
		}
		else
		{
			answer += "박";
		}
	}

	cout << answer << endl;
	// 
	// 
}
