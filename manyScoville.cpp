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
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(9);
	vec.push_back(10);
	vec.push_back(12);

	int k = 7;
	int count = 0;

	priority_queue<int> que;


	for (int i = 0; i < vec.size(); ++i)
	{
		que.push(vec[i] * -1);
	}

	while (que.empty() == false)
	{
		if (que.size() <= 1)
		{
			cout << -1;
		}

			


	}

	while (que.empty() == false && (que.top() * -1) <= k )
	{
		int min, max;
		min = que.top();
		que.pop();
		max = que.top();
		que.pop();
		que.push(min + (max * 2));
		count++;
	}

	cout << count;

}
