#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <math.h>

using namespace std;

int arr[101];

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	int count = 0;

	for (int i = 0; i < n; ++i)
	{
		if (arr[i] == 2 || arr[i] == 3)
		{
			count++;
			continue;
		}
		
		if (arr[i] % 2 == 0)
		{
			continue;
		}

		for (int j = 3; j < arr[i]; ++j)
		{
			if (arr[i] % j == 0)
			{
				break;
			}

			if (j == arr[i] - 1)
			{
				count++;
				break;
			}
		}
	}

	cout << count;

}
