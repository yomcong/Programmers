#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <math.h>
#include <string>

using namespace std;

vector<int> numss = { 1,2,7,6,4 };
int answer;


void foo(int index, int count, int sum)
{
	if (count == 3)
	{
		if (sum < 2)
		{
			return;
		}

		for (int i = 2; i * i <= sum; i++) 
		{
			if (sum % i == 0)
			{
				return; 
			}
		}
		answer++;
		return;

	}
	else
	{
		if (index == numss.size() - 1)
		{
			return;
		}

		for (int i = index + 1; i < numss.size(); ++i)
		{
			foo(i, count + 1, sum + numss[i]);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);



	for (int i = 0; i < numss.size(); ++i)
	{
		foo(i, 1, numss[i]);
	}

	cout << answer;
}






