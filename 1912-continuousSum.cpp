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

int arr[1'001];
int answer[2];

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n = 0;
	cin >> n;

	bool minus = true;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];

		if (arr[i] >=0)
		{
			minus = false;
		}
	}

	if (minus)
	{
		answer[0] = arr[0];
		for (int i = 1; i < n; ++i)
		{
			answer[0] = max(answer[0], arr[i]);
		}
		cout << answer[0];
	}
	else
	{
		answer[0] = arr[0];
		answer[1] = arr[0];


		for (int i = 1; i < n; ++i)
		{
			if (arr[i] < 0)
			{
				answer[1] = max(answer[0], answer[1]);
				answer[0] += arr[i];
			}
			else
			{
				if (answer[0] + arr[i] < arr[i])
				{
					answer[0] = arr[i];
				}
				else
				{
					answer[0] += arr[i];
				}
			}
		}

		cout << max(answer[0], answer[1]);
	}
	


}






