﻿#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<string> seoul = { {"Jane"}, {"Kim"}};
	string answer = "";
	int x = 0;

	for (int i = 0; i < seoul.size(); ++i)
	{
		if (seoul[i] == "Kim")
		{
			x = i;
			break;
		}
	}



	answer = "김서방은 ";
	answer += to_string(x);
	answer += "에 있다";


	cout << answer << endl;

}