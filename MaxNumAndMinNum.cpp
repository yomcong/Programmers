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

	string s = "11 211 -2134 12341 -7894";
	string answer = "";
	vector<int> arr = {};

	int index = s.find(' ');

	arr.push_back(stoi(s.substr(0, index)));

	while (true)
	{
		int start = index;
		index = s.find(' ', index + 1);

		if (index == -1)
		{
			index = s.size();
		}

		arr.push_back(stoi(s.substr(start + 1, index-start-1)));

		if (index == s.size())
		{
			break;
		}
	}
	
	sort(arr.begin(), arr.end());
	answer = to_string(arr.front()) + " " + to_string(arr.back());
	cout << answer;


}






