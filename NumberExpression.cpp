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

	int n = 15;
	int answer = 1;
	
	for (int i = 1; i < n; ++i)
	{
		int sum = i;

		for (int j = i + 1; j < n; ++j)
		{
			sum += j;
			if (sum == n)
			{
				answer++;
			}
			else if (sum > n)
			{
				break;
			}
		}
	}

}






