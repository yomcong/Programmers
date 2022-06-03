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

int arr[501];

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int n = 0;
	cin >> n;

	vector<vector<int>> vec(n);

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			int num = 0;
			cin >> num;
			vec[i].push_back(num);
		}
	}

	for (int i = 1; i < n; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			if (j == 0 || j == i)
			{
				vec[i][j] += vec[i - 1][max(0, j - 1)];
			}
			else
			{
				
				vec[i][j] += max(vec[i - 1][j - 1], vec[i-1][j]);

			}
		}
	}

	sort(vec[n - 1].begin(), vec[n - 1].end());

	cout << vec[n-1][n-1];
}






