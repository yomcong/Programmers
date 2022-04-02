#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <math.h>
#include <string>

using namespace std;

int arr[101];

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	vector<int> vec;
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(9);
	vec.push_back(1);
	vec.push_back(1);
	vec.push_back(1);

	int result = 0;

	int index = result;
	int count = 0;

	queue<int> que;

	for (int i = 0; i < vec.size(); ++i)
	{
		que.push(vec[i]);
	}

	sort(vec.begin(), vec.end());


	while (que.empty() == false)
	{
		if (vec[vec.size() - 1 - count] == que.front())
		{
			que.pop();
			count++;
			if (index == 0)
			{
				cout << count;
				break;
			}
			else
			{
				index--;
			}
		}
		else
		{
			que.push(que.front());
			que.pop();
			if (index == 0)
			{
				index = vec.size() - count - 1;
			}
			else
			{
				index--;
			}
		}


	}


}
